/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 18:22:48 by exam              #+#    #+#             */
/*   Updated: 2016/07/22 18:32:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_add(int a, int b)
{
	printf("%i\n", (a + b));
}

void	ft_mul(int a, int b)
{
	printf("%i\n", (a * b));
}

void	ft_div(int a, int b)
{
	if (b == 0)
		return ;
	printf("%i\n", (a / b));
}

void	ft_mod(int a, int b)
{
	if (b == 0)
		return ;
	printf("%i\n", (a % b));
}

void	ft_sub(int a, int b)
{
	printf("%i\n", (a - b));
}
