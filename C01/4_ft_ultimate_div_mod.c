/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_ft_ultimate_div_mod.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:59:44 by justo             #+#    #+#             */
/*   Updated: 2023/11/29 18:59:44 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){

    int temp;

    temp = *a / *b;
    *b = *a % *b;
    *a = temp;
}

int main(){
    int a, b;
    a = 5;
    b = 10;
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n%d", a, b);
    return 0;
}