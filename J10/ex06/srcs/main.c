/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 16:35:52 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/18 22:08:53 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_pointeurs(void (**tab)(int, int))
{
	void	(ft_add)(int, int);
	void	(ft_sub)(int, int);
	void	(ft_div)(int, int);
	void	(ft_mod)(int, int);
	void	(ft_mul)(int, int);

	tab[0] = &ft_add;
	tab[1] = &ft_sub;
	tab[2] = &ft_div;
	tab[3] = &ft_mod;
	tab[4] = &ft_mul;
}

int			main(int argc, char **argv)
{
	void			(*tab[4]) (int, int);
	char			tab2[5];
	int				i;

	if (argc != 4)
		return (0);
	ft_pointeurs(tab);
	tab2[0] = '+';
	tab2[1] = '-';
	tab2[2] = '/';
	tab2[3] = '%';
	tab2[4] = '*';
	i = 0;
	while (i < 5)
	{
		if (tab2[i] == argv[2][0])
		{
			(tab[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putchar('0');
	return (0);
}
