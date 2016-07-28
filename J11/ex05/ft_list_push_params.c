/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:00:02 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/20 21:48:08 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*first;
	int		i;

	if (ac < 2)
		return (NULL);
	list = ft_create_elem(av[1]);
	i = 2;
	while (i < ac)
	{
		first = ft_create_elem(av[i]);
		first->next = list;
		list = first;
		i++;
	}
	return (first);
}
