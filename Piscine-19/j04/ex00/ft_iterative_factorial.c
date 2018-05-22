/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 08:14:26 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/08 18:24:12 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = nb;
	i = nb - 1;
	while (i > 0)
	{
		result = result * i;
		i--;
	}
	if (nb >= 13 || result < 0)
		return (0);
	else
		return (result);
}
