#include <stdio.h>

char    *ft_strcpy(char *dest, char *src){
    int i;

    i = 0;

    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(){
    char src[5] = "4242";
    char dest[5];
    ft_strcpy(dest, src);
    int i = 0;
    while(dest[i] != '\0'){
        printf("%c", dest[i]);
        i++;
    }
    return 0;
}