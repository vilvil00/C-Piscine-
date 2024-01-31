/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkose <vkose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:32:22 by vkose             #+#    #+#             */
/*   Updated: 2024/01/30 01:44:24 by vkose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	right;
	int	left;

	left = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_putchar((left / 10) + 48);
			ft_putchar((left % 10) + 48);
			write(1, " ", 1);
			ft_putchar((right / 10) + 48);
			ft_putchar((right % 10) + 48);
			if (left != 98)
			{
				write (1, ", ", 2);
			}
			right++;
		}
		left++;
	}
}
