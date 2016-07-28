/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 20:02:42 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/27 20:04:18 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_total(int *pos, char *str, char *chartab)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '\n' && str[i] != chartab[0] && str[i] != chartab[1] \
				&& str[i])
			return (0);
		i++;
	}
	if (i != (pos[0] * (pos[1] + 1)))
		return (0);
	return (1);
}

int		set_grid(int **grille, char **str, char *chartab, int *pos)
{
	int i;
	int j;

	i = 0;
	while (i < pos[0])
	{
		j = 0;
		while (j < pos[1])
		{
			if (str[i][j] == chartab[0])
				grille[i][j] = 1;
			else if (str[i][j] == chartab[1])
				grille[i][j] = 0;
			else
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_split(int **pos, int **countlc)
{
	(*countlc)[1] = 0;
	(*countlc)[0] = (*countlc)[0] + 1;
	(*pos)[1] -= (*pos)[2];
	(*pos)[0] = (*pos)[0] + 1;
}

void	print_splitt(int **pos, int **countlc, char *chartab)
{
	ft_putchar(chartab[2]);
	(*countlc)[1]++;
	(*pos)[1]++;
}

void	print_solved_grid(char *chartab, int *pos, char **tab)
{
	int ij[2];
	int *countlc;

	if (!(countlc = malloc(sizeof(int) * 2)) || pos == NULL)
		return ;
	ij[0] = 0;
	countlc[0] = 0;
	countlc[1] = 0;
	while (tab[ij[0]])
	{
		ij[1] = 0;
		while (tab[ij[0]][ij[1]])
		{
			if (ij[0] == pos[0] && ij[1] == pos[1] && countlc[1] < \
					pos[2] && countlc[0] < pos[2])
				print_splitt(&pos, &countlc, chartab);
			else
				ft_putchar(tab[ij[0]][ij[1]]);
			if (countlc[1] == pos[2] && countlc[0] < pos[2])
				print_split(&pos, &countlc);
			ij[1]++;
		}
		ij[0]++;
		ft_putstr("\n");
	}
}
