/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 21:35:49 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/22 13:22:47 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int	i;

	i = 0;
	while (i < leveltotal)
	{
		if (current_level != levelapplied)
		{
			btree_apply_by_level(root->left, applyf, (current_level + 1), is_first_elem);
			btree_apply_by_level(root->right, applyf, (current_level + 1), is_first_elem);
	
		}
		if (current_level == levelapplied)
		{
			applyf(root->item);
			return ;
		}
	}


