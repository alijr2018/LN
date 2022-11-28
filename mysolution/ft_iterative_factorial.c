#include<unistd.h>
#include"ft_putchar.h"
#include"ft_putnbr.h"

int ft_iterative_factorial(int nb)
{
    int i;
    int x;
    x=1;
    i=1;
    if (nb <= 0)
    {
      ft_putnbr('0');
        ft_putchar('\n');
    }
    if (nb == 1){
        ft_putnbr(1);
        ft_putchar('\n');
    }
    else if(nb>0)
    {
        while (i <= nb)
        {
                x *=i;
                i++;
        }
        ft_putnbr(x);
        ft_putchar('\n');
    }
}


int main() 
{
    ft_iterative_factorial(3);
    ft_iterative_factorial(10);
    ft_iterative_factorial(12);
    ft_iterative_factorial(30);
    ft_iterative_factorial(1);
    ft_iterative_factorial(0);
    ft_iterative_factorial(-3);
}