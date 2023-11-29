/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ft_print_reverse_alphabet.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:58:21 by justo             #+#    #+#             */
/*   Updated: 2023/11/29 18:58:21 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(){

    char c;
    c = 'z';

    while(c >= 'a'){
        write(1,&c,1);
        c--;
    }
}

int main(){
    ft_print_reverse_alphabet();
    return 0;
}

