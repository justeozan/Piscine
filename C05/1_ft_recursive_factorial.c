#include <stdio.h>

int run(int nb, int res, int i){
  if (i <= nb)
    res = run(nb, res, i + 1) * i;
  return res;
}

int ft_recursive_factorial(int nb){

  int res;
  int i;
  res = 1;
  i = 1;

  res = run(nb, res, i);
  return res;
}

int main(){
  int res = ft_recursive_factorial(7);
  printf("%d", res);
  return 0;
}