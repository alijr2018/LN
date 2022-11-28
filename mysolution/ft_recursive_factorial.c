#include<unistd.h>
#include"ft_putchar.h"
#include"ft_putnbr.h"

int	ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return(0);
	if(nb == 0 || nb == 1)
		return(1);
        
	return nb * ft_recursive_factorial(nb - 1);
}

int main()
{
    int i;
	int a;

	a = 5;
	i = ft_recursive_factorial(a);
	ft_putnbr(i);
}