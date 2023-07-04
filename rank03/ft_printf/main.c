#include <stdio.h>

int main(void)
{
    int nbr = -12;
    int hex = 15;
    printf("\t<--\tNo va_args:\t\t{%i}\n", ft_printf("12345"));

    printf("\t<--\tOnly va_args (%\%s):\t{%i}\n", ft_printf("%s", "12345"));
    
    printf("\t<--\tHalf va_args (%\%s):\t{%i}\n", ft_printf("12%s", "345"));
    
    printf("\t<--\tOnly va_args (%\%s):\t{%i}\n", ft_printf("%s", "string"));
   
    printf("\t<--\tOnly va_args (%\%s):\t{%i}\n", ft_printf("%s", ""));

    printf("\t<--\tOnly va_args (%\%i):\t{%i}\n", ft_printf("%d", nbr));

    printf("\t<--\tOnly va_args (%\%i):\t{%i}\n", ft_printf("%x", hex));
    
    return (0);
}