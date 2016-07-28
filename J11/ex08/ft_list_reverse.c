/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 22:19:29 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/20 22:29:11 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*temp;
	t_list	*list;
	t_list 	*temp2;
	int		i;
	int		j;

//	temp = NULL;
//	list = NULL;
	j = 0;
	i = 0;
	list = *begin_list;
	temp2 = list;
	while (list->next)
	{
		list = list->next;
		i++;
	}
	while (i < j)
	{
		temp = list;
		list = temp2;
		temp2 = temp;
		i--;
		j++;
	}
}
