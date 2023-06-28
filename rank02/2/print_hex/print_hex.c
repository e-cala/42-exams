#include <stdio.h>
#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_atoi(char *str)
{
	int	result;

	if (*str == '0')
		return (0);
	result = 0;
	while (*str)
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result);
}

void	print_hex(int num)
{
	char	*base = "0123456789abcdef";

	if (num >= 16)
		print_hex(num / 16);
	ft_putchar(base[num % 16]);
}


int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[argc - 1]));
	ft_putchar('\n');
	return (0);
}
