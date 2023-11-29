/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_ft_print_combn.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:59:04 by justo             #+#    #+#             */
/*   Updated: 2023/11/29 18:59:04 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str, char *max){

    int i;
    i = 0;

    while (str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
    if (str[0] != max[0])
        write(1, ", ", 2);
    else
        write(1, "\n", 1);
 
}

void    ft_init_tab(char *str, int n){

    int i;
    i = 0;

    while (i < n){
        str[i] = i + '0';
        i++;
    }   
    str[n] = '\0';
}

void    ft_init_max(char *max, int n){

    int i;
    i = 9;
    n--;
    
    while(n >= 0){
        max[n] = i + '0';
        i--;
        n--;
    }
}


void    ft_run(char *str, char *max, int n){

    int i;
    i = n - 1;

    ft_putstr(str, max);

    while (str[0] != max[0]){

        while (str[i] == max[i]){
            i--;
        }
        str[i]++;
        while (i < n - 1){  
            i++;              //*!*
            str[i] = str[i - 1] + 1;
            
        }
        ft_putstr(str, max);
        
    }
}

void ft_print_combn(int n){

    char str[11];
    char max[11];

    ft_init_tab(str, n);
    ft_init_max(max, n);
    ft_run(str, max, n);
}

int main(){

    ft_print_combn(0);
    return 0;
}

