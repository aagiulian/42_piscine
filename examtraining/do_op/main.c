/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 18:30:52 by exam              #+#    #+#             */
/*   Updated: 2016/07/22 19:04:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("\n");
		return (0);
	}
	if (argv[2][0] == '+')
	{
		ft_add(atoi(argv[1]), atoi(argv[3]));
		return (0);
	}
	else if (argv[2][0] == '-')
	{
		ft_sub(atoi(argv[1]), atoi(argv[3]));
		return (0);
	}
	else if (argv[2][0] == '/')
	{
		ft_div(atoi(argv[1]), atoi(argv[3]));
		return (0);
	}
	else if (argv[2][0] == '%')
	{
		ft_mod(atoi(argv[1]), atoi(argv[3]));
		return (0);
	}
	else if (argv[2][0] == '*')
	{
		ft_mul(atoi(argv[1]), atoi(argv[3]));
		return (0);
	}
	return (0);
}
