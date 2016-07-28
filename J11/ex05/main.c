/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:23:59 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/19 20:05:58 by agiulian         ###   ########.fr       */
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
		printf("%s\n", (char*)list->data);
		list = list->next;
	}
}

int		main(int argc, char **argv)
{

	t_list	*list;

	list = NULL;
	list = ft_list_push_params(argc, argv);
	print_list(list);
	return (0);
}
