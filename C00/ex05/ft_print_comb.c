/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkose <vkose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:02:14 by vkose             #+#    #+#             */
/*   Updated: 2024/01/29 20:54:58 by vkose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_putchar (i);
				ft_putchar (j);
				ft_putchar (k);
				if (i != '7')
					write (1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
