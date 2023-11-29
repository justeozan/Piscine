#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){

    int i, j;
    i = 0;
    j = 0;

    while (dest[i] != '\0')
        i++;
    
    while (src[j] != '\0' && i < size){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return i;
}

int main(){
    unsigned int size = 13;
    char dest[13] = "poil";
    char src[7] = "Amince";
    int res = ft_strlcat(dest, src, size);
    printf("%d", res);
}