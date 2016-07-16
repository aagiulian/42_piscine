/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 14:17:59 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/09 20:29:00 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int resultat;

	resultat = 1;
	if (nb < 13 && nb > 0)
	{
		while (nb > 1)
		{
			resultat = resultat * nb;
			nb = nb - 1;
		}
		return (resultat);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (0);
}
