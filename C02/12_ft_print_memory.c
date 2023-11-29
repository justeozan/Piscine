#include <unistd.h>
#include <stdio.h>

// void    putstr(char tab){
//     int i;
//     i = 0;
// }


void    ft_print_hexa(int nb){
    
    char tab[16] = "0123456789abcdef";
    
    int a;
    int i;
  

    while( nb / 16 !=0 ){
        a = nb / 16;
        write(1, &tab[a], 1);
        a = nb % 16;
        write(1, &tab[a], 1);

    }

    

}
void    *ft_print_memory(void *addr, unsigned int size){

    char *q = (char *)addr;
    //printf("%s\n", q); // Bonjour
    addr++;
    write(1, addr, 1); //o 
    ft_print_hexa(addr + '0');

   
}

int main() {
    //char str[100] = "Bonjour";
    char str[100] = "Bonjour les aminches...c. est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. .";
    //void *addr = &str; // p pointe vers x

    // printf("La valeur de x est %s\n", str);   // 42
    // printf("L'adresse de x est %p\n", &str);  // 0061FF14 : Adresse du premier caractère
    // printf("La valeur de p est %p\n", addr);  // 0061FF14
    

    //int *q = (int *)addr; // on convertit addr en un pointeur de type int
    //printf("La valeur pointée par q est %d\n", *q); // 42

    ft_print_memory(&str, 93);
    return 0;
}