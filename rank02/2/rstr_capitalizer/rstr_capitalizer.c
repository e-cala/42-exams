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

void	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && is_del(str[i + 1]))
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && !is_del(str[i + 1]))
			str[i] += 32;
		ft_putchar(str[i]);	
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
			rstr_capitalizer(argv[i++]);
	}
	ft_putchar('\n');
}
