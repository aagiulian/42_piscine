/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 23:15:35 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/10 18:50:13 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(char begend, char middle, int x)
{
	int k;

	k = 1;
	if (x == 1)
	{
		ft_putchar(begend);
		ft_putchar('\n');
	}
	else if (x > 1)
	{
		ft_putchar(begend);
		while (k < x - 1)
		{
			ft_putchar(middle);
			k++;
		}
		ft_putchar(begend);
		ft_putchar('\n');
	}
}

void	colle(int x, int y)
{
	int i;

	i = 1;
	if (y == 1)
	{
		ft_print_line('o', '-', x);
	}
	else if (y > 1)
	{
		ft_print_line('o', '-', x);
		while (i < y - 1)
		{
			ft_print_line('|', ' ', x);
			i++;
		}
		ft_print_line('o', ' ', x);
	}
}
