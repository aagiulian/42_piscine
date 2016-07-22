/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 14:01:03 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/22 16:37:17 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_countwords(char *str)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
				&& str[i] != '\0')
			nb_words++;
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
				&& str[i] != '\0')
			i++;
	}
	return (nb_words);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(char) * len + 1);
	while (src[i] != '\n' && src[i] != '\t' && src[i] != ' ' && src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (str)
		tab = (char**)malloc(sizeof(char*) * (ft_countwords(str + 1)));
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
				&& str[i])
		{
			tab[j] = (char*)malloc(sizeof(char) *
					(ft_strlen(ft_strdup(str + i)) + 1));
			tab[j] = ft_strdup(str + i);
			j++;
		}
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
