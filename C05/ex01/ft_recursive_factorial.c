/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkose <vkose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 03:21:17 by vkose             #+#    #+#             */
/*   Updated: 2024/02/13 07:06:44 by vkose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial (nb - 1);
		nb -= 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
