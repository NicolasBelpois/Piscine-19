/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 15:16:02 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/16 16:45:18 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list			*ft_list_push_params(int ac, char **av)
{
	t_list	*pos;
	t_list	*elem;
	int		i;

	i = 1;
	pos = 0;
	if (ac <= 0)
		return (0);
	while (i < ac)
	{
		elem = ft_create_elem(av[i]);
		elem->next = pos;
		pos = elem;
		i++;
	}
	return (elem);
}
