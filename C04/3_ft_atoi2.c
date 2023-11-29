#include <unistd.h>

void ft_putchar(char c){
  write(1, &c, 1);
}

void ft_putnbr(int nb){

  if (nb > 9)
    ft_putnbr(nb / 10);
  
  ft_putchar(nb % 10 + '0');
}

int ft_atoi(char *str){

  int i;
  i = 0;
  int k;
  k = 0;

  while (str[i] == ' '){
    i++;
  }

  while (str[i] == '-' || str[i] == '+'){
    
    if (str[i] == '-')
      k++;
    i++;
  }

  if (k % 2 > 0)
    write(1, "-", 1);
  
  while (str[i] > '0' && str[i] < '9'){
    write(1, &str[i], 1);
    i++;
  }

  return 0;
}

int main(){
  char str[11] = "  -+456ae5";
  ft_atoi(str);
  return 0;
}