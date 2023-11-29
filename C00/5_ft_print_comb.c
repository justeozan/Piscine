/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_ft_print_comb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:58:34 by justo             #+#    #+#             */
/*   Updated: 2023/11/29 18:58:34 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(){

}

void ft_print_comb(void){
    char n, m, o, esp;

    esp = '\n';
    n = 48;
    m = 48 + 1;
    o = 48 + 2;

    while(n <= '7')
    { // =57
        m = n + 1;
        while(m <= '8')
        {
            o = m + 1;
            while(o <= '9')
            {
                write(1,&n,1);
                write(1,&m,1);
                write(1,&o,1);
                o++;
                write(1, "\n", 1);
            }
            m++;
        }
        n++;
    }
}

int main(){
    ft_print_comb();
    return 0;
}
