#include <stdio.h>

int str_length(int nbr);
char *ft_itoa(int nbr);

int     main(void)
{
        printf("str_length[123]:        %i\n", str_length(123));
        printf("str_length[0]:          %i\n", str_length(0));
        printf("str_length[-1]:         %i\n", str_length(-1));
        printf("str_length[-123]:       %i\n", str_length(-123));
        printf("************************\n");
        printf("ft_itoa[123]:           %s\n", ft_itoa(123));
        printf("ft_itoa[0]:             %s\n", ft_itoa(0));
        printf("ft_itoa[-1]:            %s\n", ft_itoa(-1));
        printf("ft_itoa[-123]:          %s\n", ft_itoa(-123));
        return (0);
}
