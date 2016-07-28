/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 17:13:41 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/19 18:18:43 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void    print_list(t_list *list)
{
	while (1)
	{
		if (list == NULL)
			return;
		printf("%i\n", ((int*)list->data)[0]);
		list = list->next;
	}
}
int     main(int argc, char **argv)
{
	int	  *elem;
	t_list  *list;
	int     i;
	i = 0;
	elem = &i;

	list = NULL;
	ft_list_push_back(&list, elem);
	print_list(list);
	return (0);
}
