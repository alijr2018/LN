#include<unistd.h>
#include"ft_putchar.h"
#include"ft_putnbr.h"

int ft_iterative_power(int nb, int power)
{
    int i;
    int x;
    i=1;x=1;
    while (i<=power)
    {
        x*=nb;
        i++;
    }
    ft_putnbr(x);
    ft_putchar('\n');
}

int main()
{
    ft_iterative_power(19,5);
    ft_iterative_power(3,2);
}
