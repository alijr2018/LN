#ifndef FT_PUTCHAR
#define FT_PUTCHAR


void ft_putchar(char c)
{
    write(1,&c,1);
}

#endif
