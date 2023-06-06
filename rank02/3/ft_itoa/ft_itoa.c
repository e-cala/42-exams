#include <stdlib.h>

int	str_length(int	nbr)
{
	int	i;


	if (nbr == 0)
		return (1);
	i = 0;
	if (nbr < 0)
		i++;
	while (nbr != 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int	len;
	char	*ptr;
	
	len = str_length(nbr);
	ptr = malloc ((len + 1) * sizeof *ptr);
	if (!ptr)
		return (NULL);
	ptr[len--] = '\0';
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr *= -1;
		while (len > 0)
		{
			ptr[len--] = (nbr % 10) + '0';
			nbr /= 10;
		}
	}
	else
	{
		while (len >= 0)
		{
			ptr[len--] = (nbr % 10) + '0';
			nbr /= 10;
		}
	}
	return (ptr);
}
