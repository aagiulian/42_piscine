/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 19:49:38 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/21 22:21:14 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, \
		int (*cmpf)(void *, void *))
{
	void	*point;

	point = NULL;
	if (root)
	{
		point = btree_search_item(root->left, data_ref, cmpf);
		if (point)
			return (point);
		if (cmpf(data_ref, root->item) == 0)
		{	
			point = root->item;
			return (point);
		}
		point = btree_search_item(root->right, data_ref, cmpf);
		if (point)
			return (point);
	}
	return (NULL);
}
