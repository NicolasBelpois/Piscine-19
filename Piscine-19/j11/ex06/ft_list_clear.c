/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:50:55 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/16 17:06:40 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *delete;
	t_list *list;

	list = *begin_list;
	while (list != NULL)
	{
		if (list->next)
		{
			delete = list;
			list = list->next;
			free(delete);
		}
	}
	list = NULL;
}
