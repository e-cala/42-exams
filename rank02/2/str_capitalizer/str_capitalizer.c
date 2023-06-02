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

void	str_cpaitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && is_del(str[i - 1]))
			str[i] -= 32;
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
			str_cpaitalizer(argv[i++]);		
	}
	ft_putchar('\n');
	return (0);
}

