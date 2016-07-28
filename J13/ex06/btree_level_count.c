/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 20:10:10 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/21 20:17:03 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		ft_max(int x, int y)
{
	return (x > y ? x : y);
}

int		btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	else
		return (ft_max(btree_level_count(root->left), \
					btree_level_count(root->right)) + 1);
}
