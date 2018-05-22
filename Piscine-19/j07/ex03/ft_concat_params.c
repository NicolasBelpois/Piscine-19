/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 11:00:12 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/10 17:39:49 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
		str += 1;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*para;
	int		i;
	int		totlength;
	int		paralength;

	i = 1;
	totlength = 0;
	while (i < argc)
	{
		paralength = ft_strlen(argv[i]);
		totlength += paralength + 1;
		i++;
	}
	i = 1;
	para = (char*)malloc(sizeof(int) * (paralength + 1));
	while (i < argc)
	{
		ft_strcat(para, argv[i]);
		ft_strcat(para, "\n");
		i++;
	}
	return (para);
}
