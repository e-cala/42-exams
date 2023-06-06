#include <unistd.h>
#include <stdio.h>

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
	rev = NULL;
	len--;
	while (str[len])
	{
		if (str[len - 1] == ' ')
		{
			rev = &str[len];
			while (*rev && *rev != ' ')
			{
				ft_putchar(*rev);
				rev++;
			}
			ft_putchar(' ');
		}
		else if (len == 0)
		{
			rev = &str[len];
			while (*rev && *rev != ' ')
			{
				ft_putchar(*rev);
				rev++;
			}
		}
		len--;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_wstr(argv[argc - 1]);
	}
	ft_putchar('\n');
	return (0);
}
