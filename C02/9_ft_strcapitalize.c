#include <stdio.h>

char    *ft_strcapitaliza(char *str){

    int i;
    i = 0;


    while (str[i] != '\0'){
        if (str[i] >= 'a' && str[i] <= 'z'){
            if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i - 1] <= '9')))
                str[i] -= 32;
        }
         if (str[i] >= 'A' && str[i] <= 'Z'){
            if (((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i - 1] <= '9')))
                str[i] += 32;
        }
        i++;
    }

    return str;
}

int main(){
    char str[35] = "Bonjour je suis 5ne 7aUTRUChe";
    ft_strcapitaliza(str);
    int i = 0;
    while (str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }
    return 0;
}