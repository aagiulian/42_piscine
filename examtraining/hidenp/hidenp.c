/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 19:13:36 by exam              #+#    #+#             */
/*   Updated: 2016/07/22 19:25:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hidenp(char *tofind, char *str)
{
	int i;
	int j;
	int len;
	int count;

	count = 0;
	i = 0;
	j = 0;
	len = 0;
	while (tofind[len])
		len++;
	while (str[i])
	{
		if (str[i] == tofind[j])
		{
			count++;
			j++;
		}
		i++;
	}
	if (count == len)
	{
		ft_putchar('1');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}

}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_hidenp(argv[1], argv[2]);
	return (0);
}
