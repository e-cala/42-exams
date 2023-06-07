/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:12:53 by ecabanas          #+#    #+#             */
/*   Updated: 2023/06/07 12:39:25 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

bool	is_del(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

int	count_words(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!is_del(str[i]) && is_del(str[i + 1]))
			count++;
		i++;
	}
	return (count);
}
/*
char	**ft_split(char *str)
{
	int	i = 0;
	int	wc = count_words(str);
	char **out = malloc((wc + 1) * sizeof *out);
	while (str[i])
	{
		while (is_del(str[i]))
			i++;
		j = i;
		while (!is_del(str[i]))
			i++;
		if (i < j)
		{
			out[k] = malloc((i - j) + 1 * sizeof(char));
			ft_strncpy()
		}
		i++;
	}
}*/
