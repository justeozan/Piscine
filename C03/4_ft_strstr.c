#include <stdio.h>
#include <unistd.h>

char    *ft_strstr(char *str, char *to_find){

    int i;
    int tmp;
    
    while (*to_find == '\0')
        return str;

    while (*str != '\0'){
        if (*str == *to_find)
        {
        i = 0;
        tmp = 0;
        while (to_find[i] != '\0')
        {
            if (to_find[i] != str[i])
                tmp = 1;
            i++;
        }
        if (tmp == 0)
            return str;
        str++;
        }
    }
    return (0);
}

int main(){
    char str[50] = "j'aime les bananes";
    char to_find[7] = "bananes";

    ft_strstr(str, to_find);
    printf("%d", str);
}
// jsp faire le main d'ici