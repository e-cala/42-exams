#include <unistd.h>
#include <stdarg.h>

static int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

static void	ft_putstr(char *str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*len += ft_putchar(*str++);
}

static void	ft_putnbr(int nbr, int base, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr < 0)
	{
		nbr *= -1;
		*len += ft_putchar('-');
	}
	if (nbr >= base)
		ft_putnbr(nbr / base, base, len);
	*len += ft_putchar(hex[nbr % base]);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if ((*str == '%') && *(str + 1))
		{
			str++;
			if (*str == 's')
				ft_putstr(va_arg(args, char *), &len);
			else if (*str == 'd')
				ft_putnbr(va_arg(args, int), 10, &len);
			else if (*str == 'x')
				ft_putnbr(va_arg(args, unsigned int), 16, &len);
		}
		else
			len += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (len);
}
