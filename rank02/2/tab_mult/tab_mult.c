#include <unistd.h>
#include <stdio.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(int num)
{
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

static int	ft_atoi(char *str)
{
	int	result;
	
	result = 0;
	while (*str)
		result = (result * 10) + (*str++ -'0');
	return (result);
}

void	tab_mult(int num)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (i <= 9)
	{
		result = num * i;
		ft_putchar(i+'0');
		write(1, " x ", 3);
		ft_putchar(num+'0');
		write(1, " = ", 3);
		ft_putnbr(result);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(ft_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
