/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:41:46 by ecabanas          #+#    #+#             */
/*   Updated: 2023/07/05 13:43:03 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

//#define BUFFER_SIZE 8192

char	*get_next_line(int fd)
{
	int		index = 0;
	int		bytes;
	char	character;
	char	*buffer = malloc((BUFFER_SIZE + 1) * sizeof * buffer);

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while ((bytes = read(fd, &character, 1)) > 0)
	{
		buffer[index++] = character;
		if (character == '\n')
			break ;
	}
	if ((bytes <= 0) && (index == 0))
		return (free(buffer), NULL);
	buffer[index] = '\0';
	return (buffer);
}
