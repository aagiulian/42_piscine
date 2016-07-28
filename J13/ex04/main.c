/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:17:39 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/21 19:06:08 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "unistd.h"
#include "string.h"

void btree_apply_suffix(t_btree *root, void (*applyf)(void *));

void	ft_putstr(void *v)
{
	char *str;

	str = (char*)v;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(void)
{
	t_btree *root;
	char 	*str1;
	char	*str2;
	char	*str3;

	str1 = "1";
	str2 = "4";
	str3 = "3";
	root = NULL;
	btree_insert_data(&root, "3", strcmp);
	btree_insert_data(&root, "2", strcmp);
	btree_insert_data(&root, "3", strcmp);
	btree_apply_suffix(root, &ft_putstr);
	return (0);
}
