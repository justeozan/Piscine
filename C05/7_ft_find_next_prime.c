#include <stdio.h>

int ft_find_next_prime(int nb){

  int i;
  int nb2;
  nb2 = nb;
  i = 2;
  if (nb <= 1)
    return 2;
  while(i < nb2){
    if (nb2 % i == 0){
        nb2++;
        i = 2;
    }
    i++;
  }
  return nb2;
}

int main(){
  int res = ft_find_next_prime(18);
  printf("%d", res);
  return 0;
}
