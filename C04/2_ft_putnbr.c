#include <unistd.h>

void ft_putchar(char c){
  write(1, &c, 1);
}

void ft_putnbr(int nb){

  if (nb < 0){
    ft_putchar('-');
    nb = -nb;
  }

  if (nb > 9){
    ft_putnbr(nb / 10);
  }

  ft_putchar(nb % 10 + '0');
}

int main(){
  ft_putnbr(255);
  write(1, "\n", 1);
  ft_putnbr(10);
  write(1, "\n", 1);
  ft_putnbr(0);
  write(1, "\n", 1);
  ft_putnbr(-42);
  return 0;
}