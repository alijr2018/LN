#include<unistd.h>
#include <stdio.h>
void ft_ft(int *nbr)
{
    *nbr = 42 ;
}

int		main(void)
{
	int a;
	int *ptr;

	a = 21;
	ptr = &a;
	printf("Avant (21): %d\n", a);
	ft_ft(ptr);
	printf("Apres (42): %d\n", a);
}


//idk this ???