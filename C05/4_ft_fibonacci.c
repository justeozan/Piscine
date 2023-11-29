#include <stdio.h>

int run(int nb1, int nb2, int i, int index){
  if (i < index)
    nb2 = run(nb2, nb2 + nb1, i + 1, index);
  return nb2;
}

int fibonacci(int index){
  int res;
  if (index < 0)
    return -1;
  res = run(0, 1, 2, index);
  return res;
}

int main(){
  int res = fibonacci(-1);
  printf("%d", res);
  return 0;
}