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

int main(void)
{
        char    *str = " hola como estas";
        int     i = 0;

//      printf("count_words:\t%i\n", count_words(str, del));
//      printf("ft_strcpy  :\t%s\n", ft_strcpy(str, del));

        char    **arr = ft_split(str);
        while (arr[i])
        {
                printf("split:\t%s\n", arr[i]);
                free(arr[i]);
                i++;
        }
        free(arr);
        return (0);
}
