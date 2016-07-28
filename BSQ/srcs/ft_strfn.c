/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 16:47:26 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/27 16:53:53 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int swapnb;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dest[j])
		j++;
	swapnb = i + j;
	i = 0;
	while (j != swapnb)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

void	*ft_malloc(char *str, int size)
{
	if (!(str = malloc(sizeof(char) * size + 1)))
		exit(0);
	return (str);
}
