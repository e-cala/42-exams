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
#include <stdlib.h>

int	count_words(char *str);
char	**ft_split(char *str);


int	main(void)
{
	//char	*str = "hola como estas .";
	//printf("count_words:		%i\n", count_words(str));
	char	**split = ft_split("hola como estas .  ");
	int	i = 0;
	while (split[i])
	{
		printf("[%i]%s\n",i, split[i]);
		i++;
	}
	free(split);
	while (i >= 0)
	{
		free(split[i]);
		i--;
	}
	return (0);
}
