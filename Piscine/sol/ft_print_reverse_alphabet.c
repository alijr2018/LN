#include<unistd.h>
void ft_putchr(char c)
{
    write(1,&c,1);
}
void ft_print_reverse_alphabet(void)
{
    char i ;

    i = 'z';
    while(i>='a')
    {
        ft_putchr(i);
        i--;
    }
    ft_putchr('\n');
}

int main()
{
    ft_print_reverse_alphabet();
}