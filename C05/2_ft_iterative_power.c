#include <stdio.h>

int ft_iterative_power(int nb, int power){

  int res;
  res = nb;

  if (power < 0)
    return 0;
  if (nb == 0 && power == 0)
    return 1;
  while(power-- > 1)
    res = res * nb;
  return res;
}

int main(){
  int res = ft_iterative_power(0, 0);
  printf("%d", res);
  return 0;
}