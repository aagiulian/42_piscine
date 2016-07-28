/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 12:39:54 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/27 20:06:36 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_main_split(char *str, int argc, char **argv)
{
	int	argcount;

	argcount = 1;
	while (argcount < argc)
	{
		str = read_file_to_str(str, argv[argcount]);
		ft_exec_bsq(str);
		argcount++;
	}
}

int		main(int argc, char **argv)
{
	t_list	*begin_list;
	int		argcount;
	char	*str;

	argcount = 1;
	begin_list = NULL;
	str = NULL;
	if (argc == 1)
	{
		str = read_to_str(str);
		ft_exec_bsq(str);
	}
	else
		ft_main_split(str, argc, argv);
	return (0);
}
