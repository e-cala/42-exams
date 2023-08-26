#include <stdlib.h>
#include <unistd.h>

//#define BUFFER_SIZE 4

static int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

static char	*ft_strdup(char *str)
{
	int	len;
	char	*duplicate;

	len = ft_strlen(str);
	duplicate = malloc((len + 1) * sizeof * duplicate);
	if (!duplicate
		return (NULL);
	duplicate[len] = '\0';
	while (len-- > 0)
		duplicate[len] = str[len];
	return (duplicate);
}

char	*get_next_line(int fd)
{
	int	i;
	int	bytes;
	char	character;
	char	buf[70000];

	i = 0;
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
		return (NULL);
	buf[i] = '\0';
	return (ft_strdup(buf));
}
