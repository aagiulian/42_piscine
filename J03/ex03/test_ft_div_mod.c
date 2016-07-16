/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 19:01:21 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/07 19:49:00 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;
	
	a = 11;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%dn", div);
	printf("%dn", mod);
}
