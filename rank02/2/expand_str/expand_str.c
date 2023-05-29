/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:08:56 by ecabanas          #+#    #+#             */
/*   Updated: 2023/05/29 10:23:50 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static bool	is_del(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

void	expand_str(char *str)
{
	int	i;

	if (!*str)
		return ;
	i = 0;
	while (is_del(str[i]))
		i++;
	while (str[i])
	{
		if (is_del(str[i]) && is_del(str[i + 1]))
		{
			i++;
			continue ;
		}
		else if (is_del(str[i]) && !is_del(str[i + 1]))
			write(1, "  ", 2);
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
