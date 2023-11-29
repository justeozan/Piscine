#include <stdio.h>


int danger(){

}

int ft_ten_queens_puzzle(void){
  int bigTab[10];
  int index;

  index = 0;
  

  bigTab[0] = 0;
  bigTab[1] = 0;
  bigTab[2] = 0;
  bigTab[3] = 0;
  bigTab[4] = 0;
  bigTab[5] = 0;
  bigTab[6] = 0;
  bigTab[7] = 0;
  bigTab[8] = 0;
  bigTab[9] = 0;

  while(){
    while (index < 10){
      if (danger(bigTab[index]) == 1)
        bigTab[index]++;
      index++;
    }
  
  }

 

}