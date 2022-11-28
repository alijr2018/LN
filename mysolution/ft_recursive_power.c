#include<unistd.h>
#include"ft_putchar.h"
#include"ft_putnbr.h"

int ft_recursive_power(int nb, int power)
{
   if (power < 0)
		return (0);
	else if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int main()
{
    int i;
	int a;int b;

	a = 3;b=2;
	i = ft_recursive_power(a,b);
	ft_putnbr(i);
}