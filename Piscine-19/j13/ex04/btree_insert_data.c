/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 09:46:51 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/18 14:34:52 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree *elem;
	t_btree *start;

	start = *root;
	elem = btree_create_node(item);
	if (start)
	{
		if (cmpf(elem->item, start->item) < 0)
			btree_insert_data(&start->left, elem, cmpf);
		if (cmpf(elem->item, start->item) >= 0)
			btree_insert_data(&start->right, elem, cmpf);
	}
	start->item = elem;
}
