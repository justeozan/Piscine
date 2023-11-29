#include <stdio.h>

int ft_str_is_alpha(char *str){

    int i;

    i = 0;

    while(str[i] != '\0'){
        if (!((str[i] >=65) && (str[i] <= 90)) && !((str[i] >= 97) && (str[i] <= 122)))
            return 0;
        i++;
    }
    return 1;
}

int main(){
    char str[10] = "vree1ement";
    int res = ft_str_is_alpha(str);
    printf("%d", res);
    return 0;
}