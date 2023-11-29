#include <unistd.h>

void    ft_print_hexa(char c){

    int pos, i;
    char tabhex1[33] = "0000000000000001111111111111111";
    char tabhex2[33] = "0123456789abcdef0123456789abcdef";

    pos = c;
    write(1,"\\",1);
    write(1,&tabhex1[pos], 1);
    write(1,&tabhex2[pos], 1);
}


void    ft_putstr_non_printable(char *str){

    int i;
    i = 0;

    while (!(str[i] == '\0' && str[i + 1] == '\0' && str[i + 2] == '\0')){
        if (str[i] <= 31){
            ft_print_hexa(str[i]);
        }else{
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main(){
    char tab[333] = "Cou\ntu\\ h\1du";
    ft_putstr_non_printable(tab);
    return 0;
}