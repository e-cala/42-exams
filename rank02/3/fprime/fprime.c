#include <stdio.h>
#include <stdlib.h>

void	fprime(int num)
{
	int	i;

	if (num == 1)
	{
		printf("1");
		return ;
	}
	i = 2;
	while (i <= num)
	{
		while (num % i == 0)
		{
			printf("%i", i);
			num /= i;
			if (num != 1)
				printf("*");
		}
		i++;
	}	
}

int	main(int argc, char **argv)
{
	if (argc == 2 && atoi(argv[1]))
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
