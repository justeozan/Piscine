/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_ft_div_mod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:59:41 by justo             #+#    #+#             */
/*   Updated: 2023/11/29 18:59:41 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){

    *div = a / b;
    *mod = a % b;
}

int main(){
    int a, b, div, mod;
    
    a = 5;
    b = 10;

    ft_div_mod(a, b, &div, &mod);
    printf("%d\n%d", div, mod);
    return 0;
}