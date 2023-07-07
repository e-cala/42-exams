/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:38:57 by ecabanas          #+#    #+#             */
/*   Updated: 2023/07/05 13:41:26 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

char	*get_next_line(int fd);

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*line;

	fd = open(argv[argc - 1], O_RDONLY);
	line = "";
	i = 0;
	while (fd)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		printf("%s", line);
		i++;
	}
	fd = close(fd);
	return (0);
}
