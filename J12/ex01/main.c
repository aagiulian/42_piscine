/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 14:52:09 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/20 20:14:56 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 4096
#define BUF2_SIZE 4096

int		ft_read(char *file)
{
	int		fd;
	int		rd;
	char	buf[BUF_SIZE + 1];

	rd = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((rd = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[rd] = '\0';
		write(1, buf, rd);
	}
	if (close(fd) == -1)
		return (0);
	return (1);
}

void	ft_error(char *argv)
{
	ft_putstre("ft_cat: ");
	ft_putstre(argv);
	ft_putstre(": No such file or directory\n");
}

int		main(int argc, char **argv)
{
	int		i;
	int		nb;
	char	buf2[BUF2_SIZE + 1];

	i = 1;
	if (argc == 1 || argv[1][0] == '-')
	{
		while ((nb = read(0, buf2, 1)) > 0)
		{
			buf2[nb] = '\0';
			write(1, buf2, nb);
		}
	}
	while (i < argc)
	{
		if (ft_read(argv[i]))
			;
		else
			ft_error(argv[i]);
		i++;
	}
	return (0);
}
