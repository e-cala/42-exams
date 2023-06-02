
static unsigned int	hcf(unsigned int a, unsigned int b)
{
	unsigned int	i;

	i = (a < b) ? a : b;
	while (a % i != 0 || b % i != 0)
		i--;
	return (i);	
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (!a || !b)
		return (0);
	return (a * b / hcf(a, b));	
}
