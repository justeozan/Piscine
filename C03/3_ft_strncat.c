#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int n){

    int i, j;
    i = 0;
    j = 0;

    while(dest[i] != '\0')
        i++;
    while(j < n)
        dest[i++] = src[j++];
    return dest;
}


int main(){
    char dest[10] = "Lala";
    char src[5] = "Popo";
    ft_strncat(dest, src, 2);
    int i = 0;
    while(dest[i] != '\0')
        printf("%c", dest[i++]);
    return 0;
}