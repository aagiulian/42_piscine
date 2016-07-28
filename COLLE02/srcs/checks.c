/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 15:36:45 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/24 17:54:30 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] || s1[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int		check_col(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

int		check_line(char *str)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int		*check_result(int x, int y, char *str)
{
	int	*tab;

	tab = (int*)malloc(sizeof(int) * 5);
	tab[0] = (ft_strcmp(colle(x, y, "o-o| |o-o"), str) == 0) ? 1 : 0;
	tab[1] = (ft_strcmp(colle(x, y, "/*\\* *\\*/"), str) == 0) ? 1 : 0;
	tab[2] = (ft_strcmp(colle(x, y, "ABAB BCBC"), str) == 0) ? 1 : 0;
	tab[3] = (ft_strcmp(colle(x, y, "ABCB BABC"), str) == 0) ? 1 : 0;
	tab[4] = (ft_strcmp(colle(x, y, "ABCB BCBA"), str) == 0) ? 1 : 0;
	return (tab);
}
