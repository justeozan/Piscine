#include <stdio.h>

int ft_iterative_factorielle(int nb){

  int i;
  int res;

  i = 1;
  res = 1;

  while (i <= nb){
    res = i++ * res;
  }
  return res;
}

int main(){
  int res = ft_iterative_factorielle(2);
  printf("%d", res);
  return 0;
}