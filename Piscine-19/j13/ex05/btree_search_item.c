/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:14:44 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/18 14:11:45 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	int	is_cmp;

	is_cmp = 0;
	if (root)
	{
		if (root->left)
			btree_search_item(root->left, data_ref, cmpf);
		is_cmp = cmpf(data_ref, root->item);
		if (root->right)
			btree_search_item(root->right, data_ref, cmpf);
		if (is_cmp == 0)
			return (data_ref);
	}
	return (NULL);
}
