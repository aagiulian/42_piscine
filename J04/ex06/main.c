/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 16:04:26 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/17 21:05:19 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	int nb;

	nb = 1;
	if (ft_is_prime(nb) == 1)
		printf("%i est un nombre premier.\n", nb);
	if (ft_is_prime(nb) == 0)
		printf("%i n'est pas un nombre premier.\n", nb);
	return (0);
}
