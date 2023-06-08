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
#include <stdio.h>

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

char	*ft_strncpy(char *src)
{
	int		len;
	int		i;
	char	*ptr;

	i = 0;
	while (!is_del(src[i]))
		i++;
	len = i;
	ptr = malloc((len + 1) * sizeof * ptr);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char *str)
{
	char	**arr;
	int		words;
	int		i;
	int		k;

	words = count_words(str);
	arr = malloc((words + 1) * sizeof * arr);
	if (!arr)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		while (is_del(str[i]))
			i++;
		if (is_del(str[i - 1]) && !is_del(str[i]))
			arr[k++] = ft_strncpy(&str[i]);
		i++;
	}
	arr[k] = '\0';
	return (arr);
}
