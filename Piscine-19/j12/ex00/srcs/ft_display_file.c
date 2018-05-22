/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 11:46:03 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/17 16:48:15 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_display_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() Error\n");
	}
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
		write(1, buf, ret);
	if (close(fd) == -1)
	{
		ft_putstr("close() Error\n");
	}
}
