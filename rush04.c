/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyakarer <tyakarer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:10:13 by tyakarer          #+#    #+#             */
/*   Updated: 2024/01/28 16:11:27 by tyakarer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);
char	ft_check_inputs(int x, int y);
void	ft_print_outputs(int x, int y, int length, int height);

char	ft_check_inputs(int x, int y)
{
	if (x > 0 && y > 0)
	{
		return ('1');
	}
	else
	{
		write(1, "Please enter positive integers.", 32);
		return ('0');
	}
}

void	ft_print_outputs(int x, int y, int length, int height)
{
	if ((length == 1 && height == 1))
	{
		ft_putchar('A');
	}
	else if ((length == 1 && height == x) || (length == y && height == 1))
	{
		ft_putchar('C');
	}
	else if ((length == y && height == x))
	{
		ft_putchar('A');
	}
	else if (length == 1 || length == y)
	{
		ft_putchar('B');
	}
	else if (height == 1 || height == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	length;
	int	height;

	if (ft_check_inputs(x, y) == '1')
	{
		length = 1;
		height = 1;
		while (length <= y)
		{
			while (height <= x)
			{
				ft_print_outputs(x, y, length, height);
				height++;
			}
			ft_putchar('\n');
			length++;
			height = 1;
		}
	}
}