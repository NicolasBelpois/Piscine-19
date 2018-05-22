/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 14:42:48 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/16 18:19:49 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		count;

	count = 0;
	temp = begin_list;
	if (begin_list != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
			count++;
		}
		return (count);
	}
	return (0);
}
