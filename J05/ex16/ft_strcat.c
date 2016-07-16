/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 22:21:59 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/12 22:43:01 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
