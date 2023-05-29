/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:25:47 by ecabanas          #+#    #+#             */
/*   Updated: 2023/05/29 11:17:25 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

static bool	is_valid(char c)
{
	char	*base = "0123456789abcdefABCDEF";

	while (*base)
	{
		if (c == *base)
			return (true);
		base++;
	}
	return (false);
}

static int	is_value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int	ft_atoi_base(const char *str, int base)
{
	int	result;
	int	sign;

	result = 0;
	sign =  (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? str++ : 0; 
	while (is_valid(*str))
	{
		result = (result * base) + is_value(*str++);
	}
	return (sign * result);
}
