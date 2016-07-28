/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 14:44:06 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/28 15:21:35 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		while (argv[1][j])
		{
			if (argv[1][i] == argv[1][j])
				argv[1][j] = '\n';
			j++;
		}
		i++;
		j = i + 1;
	}
	i = 0;
	j = i + 1;
	while (argv[2][i])
	{
		while (argv[2][j])
		{
			if (argv[2][i] == argv[2][j])
				argv[2][j] = '\n';
			j++;
		}
		i++;
		j = i + 1;
	}
	i = 0;
	j = 0;
	while (argv[1][i])
	{
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				argv[2][j] = '\n';
			j++;
		}
		i++;
		j = 0;
	}
	i = 0;
	j = 0;
	while (argv[1][i])
	{
		if (argv[1][i] != '\n')
			write(1, &argv[1][i], 1);
		i++;
	}
	while (argv[2][j])
	{
		if (argv[2][j] != '\n')
			write(1, &argv[2][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
