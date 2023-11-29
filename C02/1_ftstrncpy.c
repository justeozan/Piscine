#include <stdio.h>
// #include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n){

    int i;

    i = 0;
    while(i < n){
        dest[i] = src[i];
        i++;
    }
    return dest;
}


int main(){
    char src[4] = "4242";
    char dest[4] = "0000";
    int n = 2;
    ft_strncpy(dest, src, n);
    int i = 0;
    while (i != 4){
        printf("%c", dest[i]);
        i++;
    }
    return 0;
}