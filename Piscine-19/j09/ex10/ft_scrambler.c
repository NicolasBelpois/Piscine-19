/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 16:05:48 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/11 16:07:57 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int	temp;

	temp = ***a;
	***a = *b;
	*b = ****d;
	****d = *******c;
	*******c = temp;
}
