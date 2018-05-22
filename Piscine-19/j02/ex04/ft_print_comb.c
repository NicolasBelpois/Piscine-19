/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 21:17:44 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/06 16:00:43 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_addputchar(char q, char w, char e)
{
	ft_putchar(q);
	ft_putchar(w);
	ft_putchar(e);
}

void	ft_print_comb(void)
{
	char one;
	char ten;
	char hun;

	one = '0';
	while (one <= '7')
	{
		ten = one + 1;
		while (ten <= '8')
		{
			hun = ten + 1;
			while (hun <= '9')
			{
				ft_addputchar(one, ten, hun);
				if (one != '7' || ten != '8' || hun != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				hun++;
			}
			ten++;
		}
		one++;
	}
}
