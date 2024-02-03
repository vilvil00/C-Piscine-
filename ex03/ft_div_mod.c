/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkose <vkose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:44:53 by vkose             #+#    #+#             */
/*   Updated: 2024/02/03 17:44:54 by vkose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <unistd.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
   if ( b != 0)
   {
        *div = a/b;
        *mod = a%b;
   }
}
int main()
{
    int bolunen;
    int bolum;
    int sonuc;
    int kalan;

    bolunen = 20;
    bolum =2;
    ft_div_mod(bolunen,bolum,&sonuc, &kalan);
    printf("%d \n", sonuc);
    printf("%d",kalan);
}