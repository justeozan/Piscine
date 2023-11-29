/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_ft_print_comb2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:58:43 by justo             #+#    #+#             */
/*   Updated: 2023/11/29 18:58:43 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){

    write(1,&c,1);
}

void ft_print_comb2(){

    int n, m;
    n = 0;
    m = 0;

    while(n<99)
    {
        m = n + 1;
        while(m<=99)
        {
            ft_putchar(n/10 + '0');
            ft_putchar(n%10 + '0');
            write(1, " ", 1);
            ft_putchar(m/10 + '0');
            ft_putchar(m%10 + '0');
            write(1, ",", 1);
            write(1, " ", 1);
            m++;
        }
        n++;
    }
}

int main(){

    ft_print_comb2();
    return 0;
}