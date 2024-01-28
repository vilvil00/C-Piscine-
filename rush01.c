/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyakarer <tyakarer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:10:13 by tyakarer          #+#    #+#             */
/*   Updated: 2024/01/27 17:31:55 by tyakarer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);
char	ft_check_inputs(int x, int y);
void	ft_print_outputs(int x, int y, int weight, int height);

char	ft_check_inputs(int x, int y)
{
	if (x > 0 && y > 0)
	{
		return ('1');
	}
	else
	{
		write(1, "Please enter nonnegative integers.", 34);
		return (0);
	}
}

void	ft_print_outputs(int x, int y, int weight, int height)
{
	if ((weight == 0 && height == x - 1 && x != 1) || (weight == y - 1 && height == 0 && y != 1))
	{
		ft_putchar('\\');
	}
	else if ((weight == 0 && height == 0) || (weight == y - 1 && height == x - 1))
	{
		ft_putchar('/');
	}
	else
	{
		if (weight == 0 || weight == y - 1)
		{
			ft_putchar('*');
		}
		else if (height == 0 || height == x - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush(int x, int y)
{
	int	weight;
	int	height;

	if (ft_check_inputs(x, y) == '1')
	{
		weight = 0;
		height = 0;
		while (weight < y)
		{
			while (height < x)
			{
				ft_print_outputs(x, y, weight, height);
				height++;
			}
			ft_putchar('\n');
			weight++;
			height = 0;
		}
	}
}
