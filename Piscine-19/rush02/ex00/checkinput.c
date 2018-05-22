/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 20:44:03 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/20 20:44:10 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

void		getandcheck(void)
{
	int		ret;
	int		i;
	int		line;
	char	buf[2];
	char	*getit;

	getit = (char *)malloc(sizeof(char) * 1);
	if (getit == NULL)
		return ;
	i = 0;
	line = 0;
	while ((ret = read(0, buf, 1)))
	{
		if (line == 0)
			i++;
		if (buf[0] == '\n')
			line++;
		strcombo(&getit, buf[0], ft_strcount(getit));
	}
	gcolle(line, i - 1, getit, &ret);
	if (ret == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

void		strcombo(char **src, char c, int i)
{
	char	*temp;

	temp = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while ((*src)[i] != '\0')
	{
		temp[i] = (*src)[i];
		i++;
	}
	temp[i] = '\0';
	*src = (char *)malloc(sizeof(char) * (i));
	i = 0;
	while (temp[i] != '\0')
	{
		(*src)[i] = temp[i];
		i++;
	}
	(*src)[i] = c;
	(*src)[i + 1] = '\0';
	free(temp);
}

int			ft_strcount(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i + 1);
}
