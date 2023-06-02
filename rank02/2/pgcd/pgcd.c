#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int	c;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *str)
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

void	pgcd(int a, int b)
{
	int	factor;

	factor = a;
	if (a > b)
		factor = b;
	while (1)
	{
		if (a % factor == 0 && b % factor == 0)
			break ;
		factor--;
	}
	ft_putnbr(factor);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(ft_atoi(argv[1]), ft_atoi(argv[2]));
	write(1, "\n", 1);
	return (0);
}
