#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str){

  int i;
  int k;
  int nb;

  nb = 0;
  i = 0;
  k = 0;
 
  while (str[i] == ' ')
    i++;
  while (str[i] == '-' || str[i] == '+')
    if (str[i++] == '-')
      k++;
  while (str[i] >= '0' && str[i] <= '9'){
    if (nb > 0)
      nb = (nb * 10);
    nb = nb + (str[i++] - '0');
  }
  if (k % 2 > 0)
    nb = -nb;
  return nb;
}

int main(){
  char str[11] = "  -+456ae5";
  int res = ft_atoi(str);
  printf("%d", res);
  return 0;
}