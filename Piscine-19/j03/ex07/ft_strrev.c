/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 18:02:59 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/06 16:49:25 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		index;
	int		length;
	char	letter;

	length = 0;
	index = -1;
	while (str[length] != '\0')
	{
		length++;
	}
	while (++index < --length)
	{
		letter = str[index];
		str[index] = str[length];
		str[length] = letter;
	}
	return (str);
}
