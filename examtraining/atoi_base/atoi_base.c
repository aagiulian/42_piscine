/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 18:02:16 by agiulian          #+#    #+#             */
/*   Updated: 2017/03/30 13:46:22 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	check_carac(int base, char *ctab,  char c)
{
	int i;

	i = 0;
	while (i < base && ctab[i])
	{
		if (c <= 'z' && c >= 'a')
			c -= 32;
		if (c == ctab[i])
			return (i);
		i++;
	}
	return (-1);
}

#include <stdio.h>

int		ft_atoi_base(char *str, int base)
{
	long int  nbr;
	int	negative;
	int i;
	char *ctab;

	ctab = "0123456789ABCDEF";
	negative = 0;
	nbr = 0;
	i = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') \
			|| (str[i] >= 'a' && str[i] <= 'f'))
	{
		if (check_carac(base, ctab, str[i]) == -1 && negative == 0)
			return (nbr);
		if (check_carac(base, ctab, str[i]) == -1 && negative == 1)
			return (-nbr);
		nbr *= base;
		nbr += (check_carac(base, ctab, str[i]));
		i++;
	}
	if (negative == 1)
		return ((int)-nbr);
	else
		return ((int)nbr);
}

int		main(void)
{
	printf("%i", ft_atoi_base("FFFFFF", 16));
	return (0);
}
