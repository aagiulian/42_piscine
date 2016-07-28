/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkantzer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 21:56:44 by mkantzer          #+#    #+#             */
/*   Updated: 2016/07/27 17:20:17 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*read_to_str(char *str)
{
	char	buf[4097];
	char	*str2;
	int		i;
	int		ret;
	int		size;

	size = 4096;
	i = 1;
	str = ft_malloc(str, size + 1);
	while ((ret = read(0, buf, 4096)))
	{
		buf[ret] = '\0';
		str2 = ft_malloc(str2, size + 1);
		ft_strcpy(str2, str);
		str = ft_malloc(str, size + 1);
		str = ft_strcat(str2, buf);
		size += ret;
	}
	return (str);
}

int		read_size(char *file)
{
	int		fd;
	int		size;
	int		ret;
	char	buf[4097];

	size = 0;
	if ((fd = open(file, O_RDWR)) == -1)
	{
		ft_putstre("map error\n");
		return (0);
	}
	while ((ret = read(fd, buf, 4096)) > 0)
		size += ret;
	if (close(fd) == -1)
	{
		ft_putstre("map error\n");
		return (0);
	}
	return (size);
}

char	*read_file_to_str(char *str, char *file)
{
	int		fd;
	char	buf[4097];
	int		size;
	int		ret;

	if ((size = read_size(file)) == 0)
		return (NULL);
	str = ft_malloc(str, size);
	if ((fd = open(file, O_RDWR)) == -1)
	{
		ft_putstre("map error\n");
		return (0);
	}
	while ((ret = read(fd, buf, 4096)) > 0)
	{
		buf[ret] = '\0';
		str = ft_strcat(str, buf);
	}
	str[size + 1] = '\0';
	if (close(fd) == -1)
	{
		ft_putstre("map error\n");
		return (NULL);
	}
	return (str);
}
