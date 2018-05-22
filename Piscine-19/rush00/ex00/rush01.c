/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 12:13:50 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/06 22:28:52 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(char start, char end, char fill, int length)
{
	ft_putchar(start);
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

void	ft_putcol(char start, char end, char fill, int length)
{
	ft_putchar(start);
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
	int higth;

	if (x <= 0 || y <= 0)
		return ;
	higth = x;
	length = y;
	while (length >= 1 && higth != 1)
	{
		if (length == y)
			ft_putline('/', '\\', '*', x);
		if (length == 1)
			ft_putline('\\', '/', '*', x);
		else
			ft_putline('*', '*', ' ', x);
		length -= 1;
	}
	if (higth == 1)
		ft_putcol('/', '\\', '*', y);
}
