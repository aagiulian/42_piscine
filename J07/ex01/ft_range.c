/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 13:03:57 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/14 17:20:25 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	tab = (int*)malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
