/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readcolle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 15:39:39 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/24 17:08:08 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 1

void	read_to_list(t_list **begin_list)
{
	int		rd;
	char	buf[BUF_SIZE + 1];

	while ((rd = read(0, buf, BUF_SIZE)))
	{
		ft_list_push_back((begin_list), (buf[0]));
	}
}

char	*ft_fill_tab(t_list *begin_list, int size)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * size + 1);
	while (i < size)
	{
		str[i] = begin_list->data;
		begin_list = begin_list->next;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_list_push_back(t_list **begin_list, char data)
{
	t_list	*list;

	list = *begin_list;
	if (list)
	{
		while (list->next != NULL)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list	*ft_create_elem(char data)
{
	t_list	*list;

	list = NULL;
	list = malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

int		ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
