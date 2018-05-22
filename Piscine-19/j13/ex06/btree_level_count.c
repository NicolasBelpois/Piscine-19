/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:59:56 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/18 14:15:35 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	count_all(t_btree *root)
{
	int count;

	count = 1;
	if (root)
	{
		if (root->left)
			count += count_all(root->left);
		if (root->right)
			count += count_all(root->right);
		return (count);
	}
	return (0);
}

int	btree_level_count(t_btree *root)
{
	int i;
	int j;

	i = count_all(root->left);
	j = count_all(root->right);
	if (root)
	{
		if (i >= j)
			return (i + 1);
		if (i < j)
			return (j + 1);
	}
	return (0);
}
