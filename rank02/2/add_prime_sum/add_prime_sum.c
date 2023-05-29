/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:03:21 by ecabanas          #+#    #+#             */
/*   Updated: 2023/05/29 09:51:36 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

static void	ft_putnbr(int n)
{
	int	result;

	if (n > 9)
		ft_putnbr(n / 10);
	result = (n % 10) + '0';
	write(1, &result, 1);
}

static int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result);
}

static bool	is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (false);
		i++;
	}
	return (true);
}

void	add_prime_sum(int n)
{
	int	result;
	int	i;

	result = 0;
	i = 2;
	while (i <= n)
	{
		if (is_prime(i))
			result += i;
		i++;
	}
	ft_putnbr(result);
}

int	main(int argc, char **argv)
{
	if (argc == 2 && ft_atoi(argv[1]) >= 0)
		add_prime_sum(ft_atoi(argv[1]));
	write(1, "0\n", 2);
	return (0);
}
