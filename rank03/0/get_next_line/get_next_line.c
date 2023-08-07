#include <stdlib.h>
#include <unistd.h>

static int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *str)
{
	int	i;
	int	len;
	char	*duplicate;

	len = ft_strlen(str);
	duplicate = malloc((len + 1) * sizeof * duplicate);
	if (!duplicate)
		return (NULL);
	i = 0;
	while (str[i])
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

char	*get_next_line(int fd)
{
	int	i;
	int	bytes;
	char	character;
	char	*buf;

	i = 0;
	buf = malloc((BUFFER_SIZE + 1) * sizeof * buf);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes = read(fd, &character, 1);
	while (bytes > 0)
	{
		buf[i++] = character;
		if (character == '\n')
			break ;
		bytes = read(fd, &character, 1);
	}
	if ((bytes <= 0) && (i == 0))
		return (free(buf), NULL);
	 buf[i] = '\0';
	 return (ft_strdup(buf));
}
