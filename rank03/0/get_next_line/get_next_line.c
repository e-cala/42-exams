#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool is_del(char *str)
{
	while (*str)
	{
		if (*str == '\n')
			return (true);
		str++;
	}
	return (false);
}

char	*ft_strdup(char *str)
{
	char	*res;
	int	i;

	i = 0;
	res = malloc((ft_strlen(str) + 1) * sizeof * res);
	if (!res)
		return (0);
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*res;
	int	i;
	int	j;

	i = 0;
	j = 0;
	res = malloc((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof * res);
	if (!res)
		return (0);
	while (str1[i])
	{
		res[i] = str1[i];
		i++;
	}
	while (str2[j])
		res[i++] = str2[j++];
	res[i] = '\0';
	return (res);
}

char	*ft_trim(char *line)
{
	int	i;
	char	*stash;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
		return (0);
	i++;
	if (!line[i])
		return (0);
	stash = ft_strdup(line + i);
	line[i] = '\0';
	return (stash);
}

char	*ft_get(int fd, char *buf, char *stash)
{
	char	*tmp;
	int b;

	b = 1;
	while (b)
	{
		b = read(fd, buf, BUFFER_SIZE);
		if (b < 0)
			return (0);
		if (b == 0)
			break;
		buf[b] = '\0';
		if (!stash)
			stash = ft_strdup("");
		tmp = ft_strdup(stash);
		free(stash);
		stash = ft_strjoin(tmp, buf);
		free(tmp);
		if (is_del(buf))
			break;
	}
	return (stash);
}

char	*get_next_line(int fd)
{
	char	*buf;
	char	*line;
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf = malloc((BUFFER_SIZE + 1) * sizeof * buf);
	if (!buf)
		return (0);
	line = ft_get(fd, buf, stash);
	free(buf);
	if (!line)
	{
		free(stash);
		return (0);
	}
	stash = ft_trim(line);
	return (line);
}
/*
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*line;
	int fd;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	return (0);
}*/

