#include<unistd.h>
#include"ft_putchar.h"
#include"ft_putnbr.h"
   
void ft_print_comb2(void)
{
    int i;
  int j;
  i = -1 ;
  while (++i <= 98)
  {
    j = i;
    while (++j <= 99)
    {
      ft_putchar((char)(i/10) + '0');
      ft_putchar((char)(i%10) + '0');
      ft_putchar(' ');
      ft_putchar((char)(j/10) + '0');
      ft_putchar((char)(j%10) + '0');
      
      
      if ( (i != 98))
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
      
    }
  }
}
int main()
{
    ft_print_comb2();
}