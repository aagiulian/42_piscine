/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fttest.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:40:54 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/20 21:47:18 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*first;
	int 	i;

	i = 1;
	list = ft_create_elem(av[0]);
	while (i < ac)
	{
		first = ft_create_elem(av[i]);
		first->next = list;
		list = first;
		i++;
	}
	return (first);
}
