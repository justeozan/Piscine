#include <stdio.h>

char    *ft_strlowcase(char *str){

    int i;
    i = 0;

    while (str[i] != '\0'){
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return str;
}

int main(){
    char str[4] = "A3AA";
    ft_strlowcase(str);
    int i = 0;
    while (i < 4){
        printf("%c", str[i]);
        i++;
    }
    return 0;
}