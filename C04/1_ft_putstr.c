#include <unistd.h>
void ft_putstr(char *str){

  while (*str)
    write(1, str++, 1);
}

int main(){
  char str[5] = "ours";
  ft_putstr(str);
  return 0;
}