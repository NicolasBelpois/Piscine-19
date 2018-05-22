/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_sum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 17:53:49 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/20 09:16:41 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	find_sum(char **str)
{
	int		nb1;
	int		nb2;
	char	op;

	nb1 = find_op(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '+' && op != '-')
			return (nb1);
		(*str)++;
		nb2 = find_op(str);
		if (op == '+')
			nb1 += nb2;
		if (op == '-')
			nb1 -= nb2;
	}
	return (nb1);
}
