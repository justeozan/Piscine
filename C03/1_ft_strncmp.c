#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){

    int i, a, b;

    i = 0;
    a = 0;
    b = 0;

    while (i < n){
        a += s1[i];
        b += s2[i];
        i++;
    }
    return a - b;
}

int main(){
    char s1[5] = "ToTo";
    char s2[5] = "toto";
    int res = ft_strncmp(s1, s2, 2);
    printf("%d", res);
    res = ft_strncmp(s1, s2, 3);
    printf("\n%d", res);
}
