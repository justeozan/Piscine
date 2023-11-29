#include <stdio.h>

char *ft_strcat(char *dest, char *src){

    int i, j;
    i = 0;
    j = 0;

    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
        dest[i++] = src[j++];
    dest[i] = '\0';
    return dest;
}

int main(){
    char dest[10] = "Lala";
    char src[5] = "Popo";
    ft_strcat(dest, src);
    int i = 0;
    while(dest[i] != '\0')
        printf("%c", dest[i++]);
    return 0;
}