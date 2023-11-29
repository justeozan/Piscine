#include <unistd.h>
#include <stdio.h>



void    ft_print_hexa(int nb){
    
    char tab[16] = "0123456789abcdef";
    char hex[100];
    int a;
    int b;
    int i = 0;
    

    while( nb / 16 != 0){
        a = nb % 16;
        hex[i] = tab[a];
        i++;
        a = nb / 16;
        if (a <= 16){
            hex[i] = tab[a];
            i++;
        }
        nb = nb / 16;
    }
   
    hex[i] = '\0';
    while (i-- > 0){
        write(1, &hex[i], 1);
    }
}


// void    ft_run()

void    *ft_print_memory(void *addr, unsigned int size){

    
    // ft_print_hexa(addr);
    // write(1, ": ", 2);
    char *q = (char *)addr;
    write(1, "0000000000", 10);
    ft_print_hexa(q);
    write(1, ": ", 2);

    int i;
    int j;
    i = 0;
    j = 0;

    while (j < size) {
        
        i++;
        j++;
        ft_print_hexa(*q);
        q++;
        i++;
        j++;
        ft_print_hexa(*q);
        q++;
        write(1, " ", 1);
        if (i >= 15){
            int z;
            z = 0;
            
            while (z < 16){
                
                write(1, addr, 1);
                z++;
                addr++;
            }
            write(1, "\n", 1);
            write(1, "0000000000", 10);
            ft_print_hexa(q);
            write(1, ": ", 2);
            i = 0;
        }
    }

    while (i <= 16){
        write(1, "  ", 2);
        i++;
        write(1, " ", 1);
    }
    int z;
    z = 0;
    while (z < 16){
        write(1, addr, 1);
        z++;
        addr++;
    }



}


int main() {
    char str[100] = "Bonjour les aminches...c. est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. .";
    ft_print_memory(&str, 93);
    return 0;
}