/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 19:34:45 by exam              #+#    #+#             */
/*   Updated: 2016/07/15 20:19:37 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	len;
	int	count;

	count = 0;
	len = 0;
	while (str[len])
	{
		if (str[len] == ' ' || str[len] == '\t' || str[len] == '\n')
			count++;
		len++;
	}
	len = len - count;
	return (len);
}

char	**ft_split(char *str)
{
	char	**tab = NULL;
	int		i;
	int		j;
	int		k;

	j = 0;
	i = 0;
	k = 0;
	*(*tab) = (char)malloc(sizeof(char) * (ft_strlen(str)));
	while (str[i])
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			tab[j][k] = str[i];
			i++;
			k++;
		}
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			j++;
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
		}
	}
	tab[j][k] = '\0';
	return (tab);
}
