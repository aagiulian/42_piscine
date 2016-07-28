/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:23:36 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/26 20:45:08 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		small(int x, int y, int z)
{
	int i;

	i = 0;
	while (x && y && z)
	{
		i++;
		x--;
		z--;
		y--;
	}
	return (i);
}

int		*ft_return_pos(int **grille, int *pos, int cline, int ccol)
{
	pos[0] = cline;
	pos[1] = ccol;
	pos[2] = grille[cline][ccol];
	return (pos);
}

int		*find_square(int *lcln, int **grl)
{
	int *pos;
	int lcol[2];

	if (!(pos = malloc(sizeof(int) * 3)))
		return (NULL);
	lcol[0] = lcln[0];
	pos[2] = 0;
	while ((lcol[0]--) > 0)
	{
		lcol[1] = lcln[1];
		while ((lcol[1]--) > 0)
		{
			if (grl[lcol[0]][lcol[1]] != 0)
			{
				if (lcol[1] == (lcln[1] - 1) || lcol[0] == (lcln[0] - 1))
					grl[lcol[0]][lcol[1]] = 1;
				else
					grl[lcol[0]][lcol[1]] = small(grl[lcol[0]][lcol[1] + 1], \
				grl[lcol[0] + 1][lcol[1]], grl[lcol[0] + 1][lcol[1] + 1]) + 1;
			}
			if (grl[lcol[0]][lcol[1]] >= pos[2])
				ft_return_pos(grl, pos, lcol[0], lcol[1]);
		}
	}
	return (pos);
}
