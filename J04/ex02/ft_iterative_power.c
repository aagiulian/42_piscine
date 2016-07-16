/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 16:32:14 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/09 20:58:20 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	resultat;

	resultat = nb;
	if (power >= 1)
	{
		while (power > 1)
		{
			resultat = resultat * nb;
			power--;
		}
		return (resultat);
	}
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (0);
}
