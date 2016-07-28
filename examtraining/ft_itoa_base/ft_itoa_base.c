/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 12:22:56 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/28 18:39:10 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c , 1);
}


char	*ft_itoa_base(int nbr, int base)
{
	int				i;
	unsigned int	temp;
	char 			*ret;
	int				size;
	unsigned int 	temp2;
	int				negative;
	char 			*ctab;

	ctab = "0123456789ABCDEF";
	negative = 0;
	size = 1;
	i = 0;
	if (nbr < 0)
	{
		negative = 1;
		temp = -nbr;
	}
	else
		temp = nbr;
	temp2 = temp;
	while ((temp /= base) > 0)
	{
		size *= base;
		i++;
	}
	temp = temp2;
	ret = malloc(sizeof(char) * (i + negative + 1));
	i = 0;
	if (negative == 1 && base == 10)
	{
		ret[i] = '-';
		i++;
	}
	while (size)
	{
		ret[i] = ctab[temp / size];
		temp = temp % size;
		size /= base;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

int		main(void)
{
	char *str;
	int i;

	i = 0;
	str = ft_itoa_base(-214748364, 16);

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
