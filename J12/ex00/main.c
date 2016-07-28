/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 14:52:09 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/20 17:46:07 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 4096

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
	return (0);
}

int		main(int argc, char** argv)
{
	if (argc > 2)
	{
		ft_putstre("Too many arguments.\n");
		return (0);
	}
	if (argc < 2)
	{
		ft_putstre("File name missing.\n");
		return (0);
	}
	if (ft_read(argv[1]) == -1)
		return (0);
	return (0);
}
