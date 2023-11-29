#include <unistd.h>
int ft_strlen(char *str){

  int i;
  i = 0;

  while(*str){
    i++;
    str++;
  }

  return i;
}

int main(){
  char str[5] = "ours";
  int res = ft_strlen(str);
  res += '0';
  write(1, &res, 1);
  return 0;
}