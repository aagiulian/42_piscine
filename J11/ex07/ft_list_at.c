/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 22:09:18 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/20 23:39:41 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int 	i;
	t_list			*list;

	list = begin_list;
	i = 0;
	if (list)
	{
		while (list->next)
		{
			if (i == nbr)
				return (list);
			else
				list = list->next;
				i++;
		}
	}
	return (NULL);
}
