#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end);
int	arr_length(int start, int end);

int     main(void)
{
        int     len = arr_length(1, 3);
        int     *arr = ft_range(1, 3);
        printf("(1, 3)	-->	");
        for (int i = 0; i < len; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\n");

        len = arr_length(-1, 2);
        arr = ft_range(-1, 2);
        printf("(-1, 2)	-->	");
	for (int i = 0; i < len; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\n");

        len = arr_length(0, 0);
        arr = ft_range(-0, 0);
        printf("(0, 0)	-->	");
        for (int i = 0; i < len; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\n");


        len = arr_length(0, -3);
        arr = ft_range(0, -3);
        printf("(0, -3)	-->	");
        for (int i = 0; i < len; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\n");
}
