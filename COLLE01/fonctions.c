/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 12:14:36 by pcarles           #+#    #+#             */
/*   Updated: 2016/07/16 17:20:30 by pcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_line(int number, int grille[9][9], int line)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grille[line][i] == number)
			return (0);
		i++;
	}
	return (1);
}

int	check_colon(int number, int grille[9][9], int colon)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grille[i][colon] == number)
			return (0);
		i++;
	}
	return (1);
}

int	check_block(int number, int grille[9][9], int line, int colon)
{
	int i;
	int j;

	i = line - (line % 3);
	j = colon - (colon % 3);
	line = i;
	colon = j;
	while (line < i + 3)
	{
		while (colon < j + 3)
		{
			if (grille[line][colon] == number)
				return (0);
			colon++;
		}
		colon -= 3;
		line++;
	}
	return (1);
}

int	solver(int grille[9][9], int pos)
{
	int line;
	int colon;
	int i;

	i = 1;
	line = pos / 9;
	colon = pos % 9;
	if (pos == 82)
		return (1);
	if (grille[line][colon] != 0)
		return (solver(grille, pos + 1));
	while (i <= 9)
	{
		if (check_line(i, grille, line) == 1 &&
			check_colon(i, grille, colon) == 1 &&
			check_block(i, grille, line, colon) == 1)
		{
			grille[line][colon] = i;
			if (solver(grille, pos + 1))
				return (1);
		}
		i++;
	}
	grille[line][colon] = 0;
	return (0);
}
