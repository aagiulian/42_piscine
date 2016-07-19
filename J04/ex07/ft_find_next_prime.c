/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 19:42:46 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/17 19:42:56 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_prime(int nbr)
{
	int	i;
	int	count;

	if (nbr < 1)
		return (0);
	i = 1;
	count = 0;
	while (i < nbr)
	{
		if ((nbr % i) == 0)
			count++;
		if (count > 1)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	unsigned int	i;

	if (nb < 0)
		return (1);
	i = (unsigned int)nb + 1;
	while (ft_prime(i) != 1)
		i++;
	return (i);
}

#include <stdio.h>

int		main(void)
{
	printf("%i", ft_find_next_prime(124));
	return (0);
}
