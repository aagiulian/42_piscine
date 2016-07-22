/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 14:29:49 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/22 16:22:27 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_rev(char *tab)
{
	int i;

	i = 7;
	while (tab[i])
	{
		ft_putchar(tab[i]);
		i--;
	}
}

void	print_bits(unsigned char c)
{
	int i;
	int j;
	char tab[9];

	j = 0;
	i = 128;
	while (i > 0)
	{
		if (c >= i)
		{
			tab[j] = '1';
			c = c - i;
		}
		else
			tab[j] = '0';
		i /= 2;
		j++;
	}
	tab[j] = '\0';
	print_rev(tab);
}

int		main(void)
{
	print_bits(10);
	return (0);
}
