/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 18:23:06 by exam              #+#    #+#             */
/*   Updated: 2016/07/15 18:36:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strrev(char *str)
{
	int	beg;
	int end;
	char swap;

	beg = 0;
	end = ft_strlen(str) - 1;
	while (beg < end)
	{
		swap = str[beg];
		str[beg] = str[end];
		str[end] = swap;
		end--;
		beg++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc < 2 || argc > 2)
		ft_putchar('\n');
	else
	{
		ft_putstr(ft_strrev(argv[1]));
		ft_putchar('\n');
	}
	return (0);
}
