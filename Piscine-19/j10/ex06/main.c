/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 10:11:33 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/15 18:41:16 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	do_operation(int a, void (*f) (int x, int y), int b)
{
		f(a, b);
}

int		main(int argc, char **argv)
{
		char	c;

		void	(*ptr_func) (int a, int b);

		c = '0';
		if (argc == 4)
		{
				if (argv[2][0] == '+')
					ptr_func = &add;
				if (argv[2][0] == '-')
					ptr_func = &sous;
				if (argv[2][0] == '*')
					ptr_func = &mult;
				if (argv[2][0] == '/')
					ptr_func = &div;
				if (argv[2][0] == '%')
					ptr_func = &mod;
				do_operation(ft_atoi(argv[1]), ptr_func, ft_atoi(argv[3]));	
		}
			else
				write(1, &c, 1);		
		}		
		return (0);
}
