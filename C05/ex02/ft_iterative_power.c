/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkose <vkose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 04:09:44 by vkose             #+#    #+#             */
/*   Updated: 2024/02/13 07:05:40 by vkose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
