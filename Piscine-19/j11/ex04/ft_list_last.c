/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 15:01:27 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/16 18:20:39 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*start;
	t_list	*end;

	end = NULL;
	start = begin_list;
	while (start->next != NULL)
	{
		start = start->next;
	}
	start->next = end;
	return (end);
}
