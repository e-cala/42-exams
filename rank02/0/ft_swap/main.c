/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:04:41 by ecabanas          #+#    #+#             */
/*   Updated: 2023/05/28 19:14:46 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a = 42;
	int	b = 1;
	
	printf("before swap	=>	a: %u	b:%u\n", a, b);
	ft_swap(&a, &b);
	printf("after swap	=>	a: %u	b:%u\n", a, b);
	return (0);
}
