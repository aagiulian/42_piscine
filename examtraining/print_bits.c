/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 14:29:49 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/22 16:34:40 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char c)
{
	int i;

	i = 128;
	while (i > 0)
	{
		if (c >= i)
		{
			write(1, "1", 1);
			c = c - i;
		}
		else
			write(1, "0", 1);
		i /= 2;
	}
}

int		main(void)
{
	print_bits(52);
	return (0);
}
