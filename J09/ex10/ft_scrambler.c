/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 12:47:22 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/15 12:50:42 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int	atemp;
	int btemp;
	int ctemp;
	int dtemp;

	atemp = ***a;
	btemp = *b;
	ctemp = *******c;
	dtemp = ****d;
	*******c = atemp;
	****d = ctemp;
	*b = dtemp;
	***a = btemp;
}
