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

void	rostring(char *str)
{
	int	i;

	i = 0;
	while (is_del(str[i]))
		i++;
	while (!is_del(str[i]))
		i++;
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
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
