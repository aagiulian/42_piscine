/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_alpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 15:38:18 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/28 15:46:20 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			j = 0;
			while (j < (argv[1][i] - 64))
			{
				write(1, &argv[1][i], 1);
				j++;
			}
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			j = 0;
			while (j < (argv[1][i] - 96))
			{
				write(1, &argv[1][i], 1);
				j++;
			}
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
