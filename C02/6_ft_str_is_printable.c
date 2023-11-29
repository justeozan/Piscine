#include <stdio.h>

int ft_str_is_printable(char *str){
    int i;
    i = 0;
    while(str[i]!='\0'){
            if (!((str[i] >= 32) && (str[i] <= 126)))
                return 0;
            i++;
    }
    return 1;
}

int main(){
    char str[10] = "_'!}~a1";
    // str[4] = 25;
    int res = ft_str_is_printable(str);
    printf("%d", res);
    return 0;
}