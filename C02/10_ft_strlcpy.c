#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){

    int i;
    i = 0;
    
    while (i <= size && src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    i--;
    dest[i] = '\0';
    while (src[i] != '\0')
        i++;
    return i;

}

int main(){
    unsigned int size = 15;
    char dest[16];
    char src[15] = "tarte au poire";
    int res = ft_strlcpy(dest, src, size);
    printf("%d", res);
    int i = 0;
    while (dest[i] != '\0'){
        printf("%c", dest[i++]);
    }
}