/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 23:07:43 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/12 23:23:05 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
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
	while ((j != swapnb) && i != nb)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
