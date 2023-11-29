/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_ft_rev_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:00:00 by justo             #+#    #+#             */
/*   Updated: 2023/11/29 19:00:00 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size){

    int temp, i;
    i = 0;
    size--;
    while (i <= (size / 2)){ 
        temp = tab[i];
        tab[i] = tab[size - i];
        tab[size - i] = temp;
        i++;
    }
}

int main(){
    int size = 5;
    int tab[5];
    int i, nb;
    i = 0;
    nb = 11;
    while (i < size)
        tab[i++] = nb++;
    ft_rev_int_tab(tab, size);
    i = 0;
    while(i < size)
        printf("%d ",tab[i++]);
    return 0;
}