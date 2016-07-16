/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 17:24:04 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/09 18:04:13 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index > 1)
	{
		index = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (index);
	}
	else if (index == 2)
		return (1);
	else if (index == 3)
		return (2);
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	return (0);
}
