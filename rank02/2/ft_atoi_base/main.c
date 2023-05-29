/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:30:20 by ecabanas          #+#    #+#             */
/*   Updated: 2023/05/29 11:12:49 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base);

int	main(void)
{
	printf(">>	BASE 2		<<\n");
	printf("ft_atoi:	%i\n", ft_atoi_base("00000000", 2));	
	printf("ft_atoi:	%i\n", ft_atoi_base("00000001", 2));	
	printf("ft_atoi:	%i\n", ft_atoi_base("00000010", 2));	
	printf("ft_atoi:	%i\n", ft_atoi_base("11111111", 2));	
	printf("\n>>	BASE 10		<<\n");
	printf("ft_atoi:	%i\n", ft_atoi_base("-f", 10));	
	printf("ft_atoi:	%i\n", ft_atoi_base("234z54", 10));	
	printf("ft_atoi:	%i\n", ft_atoi_base("+f", 10));	
	printf("ft_atoi:	%i\n", ft_atoi_base("ff", 10));	
	printf("ft_atoi:	%i\n", ft_atoi_base("FF", 16));	
	printf("ft_atoi:	%i\n", ft_atoi_base("f0", 10));	
	printf("ft_atoi:	%i\n", ft_atoi_base("0F", 10));	
	printf("ft_atoi:	%i\n", ft_atoi_base("0", 10));	
}
