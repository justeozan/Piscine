#include <stdio.h>

int ft_strcmp(char *s1, char *s2){

    int i, a, b;
    i = 0;
    a = 0;
    b = 0;

    while (!(s1[i] == '\0' && s2[i] == '\0')){
        a += s1[i];
        b += s2[i];
        i++;
    }
    return a - b;
}

int main(){
    char s1[5] = "Toto";
    char s2[5] = "toto";
    int res = ft_strcmp(s1, s2);
    printf("%d", res);
    return 0;
}