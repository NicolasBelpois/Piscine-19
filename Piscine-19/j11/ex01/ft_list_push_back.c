/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 09:05:48 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/16 13:31:00 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;
	t_list *start;

	start = *begin_list;
	elem = ft_create_elem(data);
	if (start != NULL && elem != NULL)
	{
		while (start->next != NULL)
		{
			start = start->next;
		}
		start->next = elem;
		elem->next = NULL;
	}
	else
		elem->next = NULL;
}
