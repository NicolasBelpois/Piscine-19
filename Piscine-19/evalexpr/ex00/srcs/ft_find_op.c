/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 17:44:56 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/20 10:03:22 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	find_op(char **str)
{
	int		nb1;
	int		nb2;
	char	op;

	nb1 = find_nb(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '/' && op != '*' && op != '%')
			return (nb1);
		(*str)++;
		nb2 = find_nb(str);
		if (op == '/')
			nb1 /= nb2;
		if (op == '*')
			nb1 *= nb2;
		if (op == '%')
			nb1 %= nb2;
	}
	return (nb1);
}
