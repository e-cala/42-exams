#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	is_del(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

int	count_words(char *str)
{
	int	i;
	int	count;

	if (!str)
		return (-1);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_del(str[i]) && is_del(str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

void	rostring(char *str)
{
	int	i;

	i = 0;
	while (is_del(str[i]))
		i++;
	while (!is_del(str[i]))
		i++;
	while (is_del(str[i]))
		i++;
	while (str[i])
	{
		if (is_del(str[i]) && is_del(str[i + 1]))
		{
			i++;
			continue ;
		}
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar(' ');
	while (is_del(*str))
		str++;
	while (!is_del(*str))
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	int	words;
	int	i;

	words = count_words(argv[1]);
	i = 0;
	if (argc >= 2 && words == 1)
	{
		while (is_del(argv[1][i]))
			i++;
		while (!is_del(argv[1][i]))
			ft_putchar(argv[1][i++]);
	}
	else if (argc >= 2 && words > 1)
		rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}
