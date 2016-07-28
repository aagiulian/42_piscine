/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 15:56:47 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/24 17:52:00 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	temp;
	int				size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	temp = nb;
	while ((temp /= 10) > 0)
		size *= 10;
	temp = nb;
	while (size != 0)
	{
		ft_putchar((temp / size) + 48);
		temp = temp % size;
		size /= 10;
	}
}

void	print_next(int x, int y, int index)
{
	ft_putstr("[colle-0");
	ft_putnbr(index);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("]");
}

void	print_results(int *results, int x, int y)
{
	int	i;
	int sol_count;

	i = 0;
	sol_count = 0;
	while (i < 5)
	{
		if (results[i] == 1)
		{
			if (sol_count)
				ft_putstr(" || ");
			print_next(x, y, i);
			sol_count++;
		}
		i++;
	}
	if (sol_count == 0)
		ft_putstr("aucune");
	ft_putstr("\n");
}
