/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:32:17 by ecabanas          #+#    #+#             */
/*   Updated: 2023/07/05 13:33:32 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

static int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

static void	ft_putstr(char *str, int *plength)
{
	while (*str)
		*plength += ft_putchar(*str++);
}

static void	ft_putnbr(int nbr, int base, int *plength)
{
	char	*hexadecimal;

	hexadecimal = "0123456789ABCDEF";
	if (nbr < 0)
	{
		nbr *= -1;
		*plength += ft_putchar('-');
	}
	if (nbr >= base)
		ft_putnbr(nbr / base, base, plength);
	*plength += ft_putchar(hexadecimal[nbr % base]);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		plength;

	plength = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%'
			&& (*(str + 1) == 's' || *(str + 1) == 'd' || *(str + 1) == 'x'))
		{
			str++;
			if (*str == 's')
				ft_putstr(va_arg(args, char *), &plength);
			else if (*str == 'd')
				ft_putnbr(va_arg(args, int), 10, &plength);
			else if (*str == 'x')
				ft_putnbr(va_arg(args, unsigned int), 16, &plength);
		}
		else
			plength += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (plength);
}
