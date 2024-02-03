/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sterlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkose <vkose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:51:52 by vkose             #+#    #+#             */
/*   Updated: 2024/02/03 21:08:40 by vkose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}	
    return (i);
}

int main()
{
    char *c = "Hello";
    printf("%d", ft_strlen(c));
}