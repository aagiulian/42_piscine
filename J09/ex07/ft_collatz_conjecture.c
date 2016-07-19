/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 16:38:37 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/15 16:42:21 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if ((base % 2) == 0)
		return (ft_collatz_conjecture(base / 2));
	if ((base % 2) != 0)
		return (ft_collatz_conjecture((base * 3) + 1));
	else
		return (0);
}
