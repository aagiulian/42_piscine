/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 19:09:22 by exam              #+#    #+#             */
/*   Updated: 2016/07/15 19:31:26 by exam             ###   ########.fr       */
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
	ft_putchar('\n');
}

char	*ft_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i + 1] == '\t' || str[i + 1] == ' ' ||
				str[i + 1] == '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i < argc)
	{
		ft_capitalizer(argv[i]);
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
