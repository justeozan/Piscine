#include <unistd.h>

int main(int argc, char **argv){
  int i;
  int j;

  i = argc - 1;
  j = 0;

  while (i > 0){
    while (argv[i][j]){
      write(1, &argv[i][j++], 1);
    }
    i--;
    j = 0;
    write(1, "\n", 1);
  }
}