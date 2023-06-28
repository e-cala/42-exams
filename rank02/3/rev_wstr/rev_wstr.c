#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

bool	is_del(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	rev_wstr(char *str)
{
	int	len;
	char	*rev;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (is_del(str[len - 1]))
		{
			rev = &str[len];
			while (!is_del(*rev))
				ft_putchar(*rev++);
			ft_putchar(' ');
		}
		else if (len == 0)
		{
			rev = &str[len];
			while (!is_del(*rev))
				ft_putchar(*rev++);
		}
		len--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[argc - 1]);
	ft_putchar('\n');
	return (0);
}
