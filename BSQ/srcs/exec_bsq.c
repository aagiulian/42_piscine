/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_bsq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 16:51:55 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/27 21:39:46 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_exec_split(int **grille, char *chartab, int *pos, char *str)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	pos[2] = 0;
	if (!(grille = malloc(sizeof(int*) * pos[0])))
		return ;
	while (pos[2] < pos[0])
	{
		if (!(grille[pos[2]] = malloc(sizeof(int) * pos[1])))
			return ;
		pos[2]++;
	}
	if ((tab = ft_split_lines(str)) == NULL)
		return ;
	set_grid(grille, tab, chartab, pos);
	print_solved_grid(chartab, (find_square(pos, grille)), tab);
}

void	ft_exec_bsq(char *str)
{
	int		pos[3];
	int		**grille;
	char	*ctab;
	int		count;

	count = 0;
	ctab = NULL;
	grille = NULL;
	if (str == NULL)
		return ;
	if (!(ctab = ft_grep_char(str, ctab)))
		return ;
	str = ft_cutstr(str, (ft_strlen(str)));
	if (!(checkcollin(str, ctab, pos, count)))
	{
		ft_putstre("map error\n");
		return ;
	}
	ft_exec_split(grille, ctab, pos, str);
}
