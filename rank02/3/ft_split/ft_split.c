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

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool    is_del(char c)
{
        return (c == ' ' || c == '\t' || c == '\n' || c == '\0');
}

int     count_words(char *str)
{
        int     i;
        int     count;

        i = 0;
        count = 0;
        while (str[i])
        {
                if (!is_del(str[i]) 
			&& (is_del(str[i + 1])) || str[i] == '\0')
                        count++;
                i++;
        }
        return (count);
}

char    *ft_strcpy(char *str)
{
        int     len;
        char    *ptr;

        len = 0;
        while (!is_del(str[len]))
                len++;
        ptr = malloc((len + 1) * sizeof *ptr);
        if (!ptr)
                return (NULL);
        ptr[len--] = '\0';
	while (len >= 0)
        {
                ptr[len] = str[len];
        	len--;
	}
        return (ptr);
}

char    **ft_split(char *str)
{
        char    **arr;
        int     words;
        int     i;
        int     k;

        if (!str)
                return (NULL);
        words = count_words(str);
        arr = malloc ((words + 1) * sizeof * arr);
        if (!arr)
                return (NULL);
        i = 0;
        k = 0;
        while (str[i])
        {
                if ((i == 0 || is_del(str[i - 1]))
                                && !is_del(str[i]))
                        arr[k++] = ft_strcpy(&str[i]);
                i++;
        }
        arr[k] = '\0';
        return (arr);
}
