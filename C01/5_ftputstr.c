/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_ftputstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:59:48 by justo             #+#    #+#             */
/*   Updated: 2023/11/29 18:59:48 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
    write(1, &c, 1);
}


void ft_putstr(char *str){

    int i;
    i = 0;
    while (str[i] != '\0'){
        ft_putchar(str[i]);
        write(1, &str[i], 1);
        i++;
    }
}

int main(){

    char str[100] = "mon dieu";
    ft_putstr(str);
    return 0;
}