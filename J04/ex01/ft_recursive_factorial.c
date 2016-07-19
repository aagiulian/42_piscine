/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 15:53:56 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/09 16:26:27 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 1 && nb < 13)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	return (0);
}
