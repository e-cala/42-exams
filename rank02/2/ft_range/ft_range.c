#include <stdio.h>
#include <stdlib.h>


int	arr_length(int start, int end)
{
	if (start > end)
		return ((start - end) + 1);
	return ((end - start) + 1);
}

int	*ft_range(int start, int end)
{
	int	len;
	int	*arr;
	int	i;

	len = arr_length(start, end);
	arr = malloc((len + 1) * sizeof *arr);
	if (!arr)
		return (NULL);
	i = 0;
	if (start < end)
	{
		while (start <= end)
		{
			arr[i++] = start;
			start++;
		}
	}
	else
	{
		while (end <= start)
		{
			arr[i++] = start;
			start--;
		}
	}
	return (arr);
}
