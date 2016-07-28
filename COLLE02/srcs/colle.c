/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmonein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 16:54:29 by gmonein           #+#    #+#             */
/*   Updated: 2016/07/24 17:49:58 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char		*ft_put_line(int pos, char *tab, int *l_coord)
{
	int		cpt_col;
	int		i;
	char	*line;

	if (pos == 0)
		line = malloc(sizeof(char) * (l_coord[0] + 1));
	cpt_col = 0;
	i = 0;
	while (cpt_col <= l_coord[0])
	{
		cpt_col++;
		if (cpt_col == 1)
			line[i++] = tab[pos];
		if (cpt_col > 1 && cpt_col < l_coord[0])
			line[i++] = tab[pos];
		else
			pos++;
		if (cpt_col == l_coord[0] && l_coord[0] != 1)
			line[i++] = tab[pos];
		if (cpt_col == l_coord[0])
			line[i++] = '\n';
	}
	line[i] = '\0';
	return (line);
}

char		*ft_line(int cpt_y, char *l_char, int *l_coord)
{
	int		pos;
	int		i;
	int		j;
	char	*tab;

	pos = 0;
	i = 0;
	tab = malloc(sizeof(char) * (l_coord[0] * (l_coord[1] + 1)));
	while (cpt_y++ < l_coord[1])
	{
		j = 0;
		if (cpt_y == 1)
			pos = 0;
		if (cpt_y > 1 && cpt_y < l_coord[1])
			pos = 3;
		if (cpt_y == l_coord[1] && l_coord[1] != 1)
			pos = 6;
		while (ft_put_line(pos, l_char, l_coord)[j++])
		{
			tab[i++] = ft_put_line(pos, l_char, l_coord)[j - 1];
		}
	}
	tab[i] = '\0';
	return (tab);
}

char		*colle(int x, int y, char *l_char)
{
	int		cpt_y;
	int		*l_coord;

	l_coord = malloc(sizeof(int) * 2);
	cpt_y = 0;
	l_coord[0] = x;
	l_coord[1] = y;
	if (x > 0 && y > 0)
		return (ft_line(cpt_y, l_char, l_coord));
	return ("");
}
