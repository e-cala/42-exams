#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

static int ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

static void    ft_putstr(char *str, int *plength)
{
    int i;

    i = 0;
    while (str[i])
        *plength += ft_putchar(str[i++]);
}

static void    ft_putnbr(long long int nbr, int base, int *plength)
{
    char    *hexadecimal = "0123456789abcdef";

    if (nbr < 0)
    {
        nbr *= -1;
        *plength += ft_putchar('-');
    }
    if (nbr >= base)
        ft_putnbr(nbr / base, base, plength);
    *plength += ft_putchar(hexadecimal[nbr % base]);
}

int ft_printf(const char *str, ...)
{
    int plength;
    int i;
    va_list args;

    plength = 0;
    i = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            if (str[i + 1] == 's')
                ft_putstr(va_arg(args, char *), &plength);
            else if (str[i + 1] == 'd')
                ft_putnbr(va_arg(args, int), 10, &plength);
            else if (str[i + 1] == 'x')
                ft_putnbr(va_arg(args, unsigned int), 16, &plength);
            i++;
        }
        else
            plength += write(1, &str[i], 1);
        i++;
    }
    va_end(args);
    return (plength);
}