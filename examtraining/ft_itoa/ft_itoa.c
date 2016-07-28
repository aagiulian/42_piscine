/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 12:22:56 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/28 14:55:08 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c , 1);
}

char	*ft_itoa(int nbr)
{
	int				i;
	unsigned int	temp;
	char 			*ret;
	int				size;
	unsigned int 	temp2;
	int				negative;

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
	while ((temp /= 10) > 0)
	{
		size *= 10;
		i++;
	}
	temp = temp2;
	ret = malloc(sizeof(char) * (i + negative + 1));
	i = 0;
	if (negative == 1)
	{
		ret[i] = '-';
		i++;
	}
	while (size)
	{
		ret[i] = (temp / size) + '0';
		temp = temp % size;
		size /= 10;
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
	str = ft_itoa(-2147483648);

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
