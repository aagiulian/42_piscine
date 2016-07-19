/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 13:57:17 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/18 16:39:01 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int *rtab;

	i = 0;
	if ((rtab = (int*)malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	while (i < length)
	{
		rtab[i] = f(tab[i]);
		i++;
	}
	return (rtab);
}
