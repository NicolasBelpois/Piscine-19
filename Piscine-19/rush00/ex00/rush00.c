/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 13:13:13 by ejaron            #+#    #+#             */
/*   Updated: 2018/05/06 21:21:18 by ejaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	ft_putline(char end, char fill, int length)
{
	ft_putchar(end);
	while (length > 2)
	{
		ft_putchar(fill);
		length -= 1;
	}
	if (length == 2)
	{
		ft_putchar(end);
		ft_putchar('\n');
	}
}

void	ft_putcol(char end, char fill, int length)
{
	ft_putchar(end);
	ft_putchar('\n');
	while (length > 2)
	{
		ft_putchar(fill);
		ft_putchar('\n');
		length -= 1;
	}
	if (length == 2)
	{
		ft_putchar(end);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	length;
	int height;

	if (x <= 0 || y <= 0)
		return ;
	height = x;
	length = y;
	while (length >= 1 && height != 1)
	{
		if (length == y || length == 1)
		{
			ft_putline('o', '-', x);
		}
		else
		{
			ft_putline('|', ' ', x);
		}
		length -= 1;
	}
	if (height == 1)
		ft_putcol('o', '|', y);
}
