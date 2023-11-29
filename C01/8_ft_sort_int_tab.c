/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_ft_sort_int_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:00:07 by justo             #+#    #+#             */
/*   Updated: 2023/11/29 19:00:07 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size){

    int i;
    i = 0;
    size--;
    while (i < size){
        if (tab[i] > tab[i + 1]){
            ft_swap(&tab[i], &tab[i + 1]);
            i = -1;
        }
        i++;
    }
}


int main(){
    int size = 6;
    int tab[6];

    tab[0] = 6;
    tab[1] = 4;
    tab[2] = 9;
    tab[3] = 3;
    tab[4] = 2;
    tab[5] = 8;
    ft_sort_int_tab(tab, size);

    int i = 0;
    while ( i < size)
        printf("%d ", tab[i++]);
    return 0;
}