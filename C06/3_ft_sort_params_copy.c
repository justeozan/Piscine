#include <unistd.h>
#include <stdio.h>

void swap(int *tab, int pos){

  int tmp;
  // printf("before : tab[0]= %d  tab[1]= %d\n", tab[pos - 1], tab[pos]);
  tmp = tab[pos];
  tab[pos] = tab[pos - 1];
  tab[pos - 1] = tmp;
  // printf("after : tab[0]= %d  tab[1]= %d\n", tab[pos - 1], tab[pos]);
}

int strcmp(char *str1, char *str2){
  int i;
  int a;
  int b;

  a = 0;
  b = 0;

  i = 0;

  while (str1[i] && str2[i]){
    a += str1[i];
    b += str2[i];
    i++;
  }
  // printf("%d\n", a - b);
  return a - b;
}

void init_tab(int *tab, int max){

  int i;
  i = 0;
  while (i < max){
    *tab++ = i++;
  }
}


void print_args(char **argv, int max, int *tab){
  int i;
  int j;

  i = 1;
  j = 0;

  while (i < max){
    while (argv[tab[i]][j]){
      write(1, &argv[tab[i]][j++], 1);
    }
    i++;
    j = 0;
    write(1, "\n", 1);
  }

}

int main(int argc, char **argv){
  int i;
  int j;
  int tab[100];

  i = 1;

  init_tab(tab, argc);
  
  while (i < argc - 1){
    if (strcmp(argv[tab[i]], argv[tab[i + 1]]) > 0){
      printf("swaping\n");
      printf("%d %d %d %d", tab[0],tab[1], tab[2],tab[3]);
      swap(tab, i);
      // printf("i : %d\n", i);
      i = 0;
      
    }
    i++;
  }
  
  print_args(argv, argc, tab);
  return 0;
}