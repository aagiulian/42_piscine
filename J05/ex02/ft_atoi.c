/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 11:27:44 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/11 15:42:39 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nbr;
	int	negative;
	int i;

	negative = 0;
	nbr = 0;
	i = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += (str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}
