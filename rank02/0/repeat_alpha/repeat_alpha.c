/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:23:04 by ecabanas          #+#    #+#             */
/*   Updated: 2023/05/28 19:35:47 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	num;

	while (*str)
	{
		num = 0;
		if (str[i] >= 'a' && *str <= 'z')
			num = *str - 'a';
		else if (*str >= 'A' && *str <= 'Z')
			num = *str - 'A';
		while (num-- >= 0)
			ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
