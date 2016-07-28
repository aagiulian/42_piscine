/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 17:31:48 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/21 19:07:22 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	b_tree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != 0)
	{
		b_tree_apply_infix(root->left, applyf);
		applyf(root->item);
		b_tree_apply_infix(root->right, applyf);
	}
}
