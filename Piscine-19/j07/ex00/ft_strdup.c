/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 07:46:53 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/11 08:54:31 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*dest;

	length = 0;
	while (src[length])
		length++;
	dest = (char*)malloc(sizeof(*src) * (length + 1));
	i = 0;
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
