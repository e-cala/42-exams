#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b);

int	main(void)
{
	unsigned int	a = 12;
	unsigned int	b = 16;
	printf("lcm(12, 16)	-->	%i\n", lcm(a, b));
	
	a = 0;
	b = 0;
	printf("lcm(0, 0)	-->	%i\n", lcm(a, b));
	
	a = '\0';
	b = 12;
	printf("lcm(NULL, 12)	-->	%i\n", lcm(a, b));
	
	a = 12;
	b = 9;
	printf("lcm(12, 9)	-->	%i\n", lcm(a, b));
}
