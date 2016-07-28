/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 17:13:41 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/20 22:32:38 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list *list)
{
	while (1)
	{
		if (list == NULL)
			return ;
		printf("%s\n", (char*)list->data);
		list = list->next;
	}
}

int		main(int argc, char **argv)
{
	t_list	*elem;
	t_list	*list;
	int		i;

	i = 1;
	elem = ft_create_elem(argv[0]);
	list = elem;
	while (i < argc)
	{
		list->next = ft_create_elem(argv[i]);
		list = list->next;
		i++;
	}
	print_list(elem);
	ft_list_reverse(&elem);
	print_list(elem);
	return (0);
}
