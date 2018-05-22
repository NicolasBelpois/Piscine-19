/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 15:58:06 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/11 15:58:36 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_conj(unsigned int base, unsigned int i);

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	return (ft_conj(base, 0));
}

unsigned int	ft_conj(unsigned int base, unsigned int i)
{
	if (base == 1)
		return (i);
	if (base % 2 == 0)
	{
		i++;
		base = base / 2;
		return (ft_conj(base, i));
	}
	if (base % 2 == 1)
	{
		i++;
		base = (base * 3) + 1;
		return (ft_conj(base, i));
	}
	return (i);
}
