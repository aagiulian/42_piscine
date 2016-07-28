/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 19:18:50 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/27 17:18:02 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_cutstr(char *str, int size)
{
	int		i;
	char	*dest;
	int		j;

	dest = NULL;
	i = 0;
	j = 0;
	while (str[i] != '\n')
		i++;
	size = size - i;
	i++;
	dest = ft_malloc(dest, size);
	while (str[i])
	{
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int		ft_countwords(char *str)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		while (str[i] == '\n')
			i++;
		if (str[i] != '\n' && str[i])
			nb_words++;
		while (str[i] != '\n' && str[i])
			i++;
	}
	return (nb_words);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		len;

	str = NULL;
	i = 0;
	len = 0;
	while (src[len])
		len++;
	str = ft_malloc(str, len);
	while (src[i] != '\n' && src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split_lines(char *str)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (str)
		if (!(tab = (char**)malloc(sizeof(char*) * (ft_countwords(str)))))
			exit(0);
	while (str[i])
	{
		if (str[i] == '\n')
			i++;
		if (str[i] != '\n' && str[i])
		{
			tab[j] = ft_malloc(tab[j], (ft_strlen(ft_strdup(str + i))));
			tab[j] = ft_strdup(str + i);
			j++;
		}
		while (str[i] != '\n' && str[i])
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
