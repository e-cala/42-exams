/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:12:03 by ecabanas          #+#    #+#             */
/*   Updated: 2023/06/07 12:23:35 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	count_words(char *str);

int	main(void)
{
	char	*str = "";
	printf("count_words:		%i\n", count_words(str));
	return (0);
}
