#include<unistd.h>
#include"ft_putchar.h"

void ft_print_comb(void)
{
    char i;
    char j;
    char k;

    i = '0';

    while (i<='7')
    {
        j=i+1;
        while(j<='8')
        {
            k=j+1;
            while (k<='9')
            {
                ft_putchar(i);
                ft_putchar(j);
                ft_putchar(k);
               if (i != '7')
               {
                ft_putchar(',');
                ft_putchar(' ');
               }
                k++;
            }
            j++;
        }
        i++;
    }
    ft_putchar('\n');
}


int main()
{
    ft_print_comb();
}