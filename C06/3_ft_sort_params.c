#include <unistd.h>
#include <stdio.h>

void swap(char *str1, char *str2){

  int i;
  i = 0;

  int temp[100];

  while (str1[i])
    temp[i] = str1[i++];
  i = 0;
  while (str2[i])
    *str1++ = str2[i++];
  while(*str1)
    *str1++ = '\n';
  i = 0;
  while (temp[i])
    *str2++ = temp[i++];
  while(*str2)
    *str2++ = '\n';
}

int strcmp(char *str1, char *str2){
  int i;
  int a;
  int b;

  i = 0;

  while (str1[i] && str2[i]){
    a = str1[i];
    b = str2[i];
    i++;
  }
  // printf("%d\n", nb);
  return a - b;
}

int main(int argc, char **argv){
  int i;
  int j;
  int nb1;
  int nb2;

  i = 1;

  while (i < argc - 1){
    if (strcmp(argv[i], argv[i + 1]) > 0){
      printf("swaping\n");
      swap(argv[i - 1], argv[i]);
      i = 1;
    }
    i++;
  }

  i = 1;
  
  
  while (i < argc){
    j = 0;
    
    while (argv[i][j])
      write(1, &argv[i][j++], 1);
    
    i++;
    
    write(1, "\n", 1);
  }
  return 0;
}