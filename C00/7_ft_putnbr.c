/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_ft_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:58:59 by justo             #+#    #+#             */
/*   Updated: 2023/11/29 18:58:59 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_putnbr(int nb){

    if (nb<0){
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);

    //ft_putchar(nb/10 + '0');
    ft_putchar(nb % 10 + '0');
}

int main(){
    ft_putnbr(42);
    write(1,"\n",1);
    ft_putnbr(0);
    write(1,"\n",1);
    ft_putnbr(6);
    write(1,"\n",1);
    ft_putnbr(-16);
    write(1,"\n",1);
    ft_putnbr(2147483647);
    write(1,"\n",1);
    ft_putnbr(-2147483647);

    return 0;
}