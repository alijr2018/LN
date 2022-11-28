#include<unistd.h>
#include"ft_putchar.h"
#include"ft_putnbr.h"
   
void ft_print_combn(void)
{
    int i;
  i = -1 ;
  while (i++ <= 89)
  {

      ft_putchar((char)(i/10) + '0');
      ft_putchar((char)(i%10) + '0');
      ft_putchar(' ');
      if ( (i != 89))
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
    }
  }
int main()
{
    ft_print_combn();
}