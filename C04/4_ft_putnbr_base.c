#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
  write(1, &c, 1);
}

int ft_strlen(char *str){
  int i;
  i = 0;
  while(*str){
    i++;
    str++;
  }
  return i;
}

void ft_run(int nbr, int len, char *base){
  if (nbr >= len)
    ft_run((nbr / len), len, base);
  ft_putchar(base[nbr % len]);
}

void ft_putnbr_base(int nbr, char *base){
  int len;
  len = ft_strlen(base);

  if (nbr < 0){
    ft_putchar('-');
    nbr = -nbr;
  }
  ft_run(nbr, len, base);
}

int main(){
  char base[17] = "0123456789ABCDEF";
  ft_putnbr_base(-249, base);
  return 0;
}