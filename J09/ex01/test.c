/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 10:55:14 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/15 11:07:23 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		h;
	char	*line;

	line = "THE FOLLOWING TAKES PLACE BETWEEN ";
	h = hour;
	if (hour == 12)
		h = 12;
	if (hour > 12)
		h = hour % 12;
	if (hour < 12)
		printf("%s%d.00 A.M. AND %d.00 P.M.", line, h, (h + 1) % 12);
	else if (hour == 11)
		printf("%s%d.00 A.M. AND %d.00 P.M.", line, h, (h + 1));
	else if (hour == 23)
		printf("%s11.00 P.M. AND 12.00 A.M.", line);
	else if (hour == 24)
		printf("%s12.00 A.M. AND 1.00 A.M.", line);
	else
		printf("%s%d.00 P.M. AND %d.00 P.M.", line, h, (h + 1) % 12);
}
