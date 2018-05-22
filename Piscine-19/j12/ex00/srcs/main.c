/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:01:08 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/17 12:25:29 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc > 2)
			write(2, "Too many arguments\n", 20);
		if (argc < 2)
			write(2, "File name missing\n", 19);
		return (1);
	}
	ft_display_file(argv[1]);
}
