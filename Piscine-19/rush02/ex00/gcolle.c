/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gcolle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karbenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 12:11:58 by karbenna          #+#    #+#             */
/*   Updated: 2018/05/20 20:42:54 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

void		gcolle(int l, int c, char *input, int *i)
{
	char	**tab;
	int		nb;
	char	*colle;

	tab = (char **)malloc(sizeof(char*) * 5);
	nb = 0;
	colle = malloc(l * c);
	while (nb < 5)
		tab[nb++] = malloc(7);
	tab[0] = "o-o|oo";
	tab[1] = "/*\\*\\/";
	tab[2] = "ABABCC";
	tab[3] = "ABCBAC";
	tab[4] = "ABCBCA";
	nb = 0;
	while (nb < 5)
	{
		creator(tab[nb++], l, c, &colle);
		*i = *i + ft_strcmp(colle, input);
		if (ft_strcmp(colle, input) == 1)
			ft_printcolle(nb, c, l, *i);
		free(colle);
		colle = malloc(l * c);
	}
}

void		creator(char *pattern, int l, int c, char **colle)
{
	int	i;
	int	j;
	int	cursor;

	cursor = 0;
	i = -1;
	while (++i < l && (j = -1) == -1)
	{
		while (++j < c)
		{
			if (i == 0 && j == 0)
				(*colle)[cursor++] = pattern[0];
			else if (i == 0 && j == c - 1)
				(*colle)[cursor++] = pattern[2];
			else if ((i == 0 || i == l - 1) && j != 0 && j != c - 1)
				(*colle)[cursor++] = pattern[1];
			else if ((i > 0 && i < l - 1) && (j == 0 || j == c - 1))
				(*colle)[cursor++] = pattern[3];
			else if (i == l - 1)
				(*colle)[cursor++] = pattern[((j == 0) ? 4 : 5)];
			else
				(*colle)[cursor++] = ' ';
		}
		(*colle)[cursor++] = '\n';
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] == '\0')
		return (1);
	else
		return (0);
}

void		ft_printcolle(int nb, int c, int l, int i)
{
	if (i > 1)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putchar(nb + 47);
	ft_putstr("] [");
	ft_putnbr(c);
	ft_putstr("] [");
	ft_putnbr(l);
	ft_putchar(']');
}
