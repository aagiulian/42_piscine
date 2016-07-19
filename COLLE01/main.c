/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgengo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 09:29:20 by jgengo            #+#    #+#             */
/*   Updated: 2016/07/16 11:54:04 by jgengo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}


int			set_grid(int grille[9][9], int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i+1][j] == '.')
				grille[i][j] = 0;
			else if (argv[i+1][j] >= '1' && argv[i+1][j] <= '9')
				grille[i][j] = argv[i+1][j] - 48;
			else
				return 0;
		j++;
		}
	i++;
	}
	return (1);
}
void		print_grille(int grille[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(grille[i][j]+48);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
	ft_putchar('\n');
	i++;
	}
}

int			main(int argc, char **argv)
{
	int grille[9][9];

	if (argc != 10)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	
	if (!(set_grid(grille, argc, argv)))
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	print_grille(grille);
	
}
