#include<unistd.h>
#include"ft_putchar.h"
#include"ft_putnbr.h"


int	ft_fibonacci(int nb)
{
	if(nb < 0)
		return(-1);
	if(nb <=2)
		return(nb);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}
int main()
{
    int i;
	int a;

	a = 3;
	i = ft_fibonacci(a);
	ft_putnbr(i);
}