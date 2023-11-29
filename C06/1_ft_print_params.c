#include <unistd.h>

int main(int argc, char **argv){
  int i;
  int j;

  i = 1;
  j = 0;

  while (i < argc){
    while (argv[i][j]){
      write(1, &argv[i][j++], 1);
    }
    i++;
    j = 0;
    write(1, "\n", 1);
  }
}