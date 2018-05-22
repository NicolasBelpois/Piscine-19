/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 09:44:45 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/06 16:07:27 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int		a;
	char	b;
	char	c;

	a = 0;
	while (++a < 10000)
	{
		b = a / 100;
		c = a % 100;
		if (b < c)
		{
			if (a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(48 + b / 10);
			ft_putchar(48 + b % 10);
			ft_putchar(' ');
			ft_putchar(48 + c / 10);
			ft_putchar(48 + c % 10);
		}
	}
}
