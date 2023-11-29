#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_hexa(int c)
{
    char tabhex[16] = "0123456789abcdef";

    ft_putchar(c / 16 + 48);
    ft_putchar(tabhex[c % 16] + 48);

}


void    *ft_print_memory(void *addr, unsigned int size)
{

    unsigned int *ptr = (unsigned char *)addr ;

    unsigned long long c = ptr;

    print_hexa(ptr);
    write(1, ": ", 2);

    



}