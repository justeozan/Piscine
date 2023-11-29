#include <stdio.h>

int run(int nb, int power, int res){

  if (power > 1)
    res = run(nb, power - 1, res) * nb;

  return res;
}

int ft_recursive_power(int nb, int power){

  int res;
  res = nb;

  if (power < 0)
    return 0;
  if (nb == 0 && power == 0)
    return 1;
  res = run(nb, power, res);
  return res;
}

int main(){
  int res = ft_recursive_power(0, 0);
  printf("%d", res);
  return 0;
}