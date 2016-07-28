/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 23:15:35 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/10 19:10:12 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(char begin, char middle, char end, int x)
{
	int k;

	k = 1;
	if (x == 1)
	{
		ft_putchar(begin);
		ft_putchar('\n');
	}
	else if (x > 1)
	{
		ft_putchar(begin);
		while (k < x - 1)
		{
			ft_putchar(middle);
			k++;
		}
		ft_putchar(end);
		ft_putchar('\n');
	}
}

void	colle(int x, int y)
{
	int i;

	i = 1;
	if (y == 1)
	{
		ft_print_line('A', 'B', 'C', x);
	}
	else if (y > 1)
	{
		ft_print_line('A', 'B', 'C', x);
		while (i < y - 1)
		{
			ft_print_line('B', ' ', 'B', x);
			i++;
		}
		ft_print_line('A', 'B', 'C', x);
	}
}
