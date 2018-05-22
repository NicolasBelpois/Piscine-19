/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 13:20:03 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/15 13:26:23 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int result;
	int	nega;

	result = 0;
	nega = 0;
	i = 0;
	while ((str[i] == '\n')|| (str[i] == '\t') || (str[i] == '\v') ||
	(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
				i++;
	if (str[i] == '-')
		nega = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if (nega == 1)
		return (-result);
	else
		return (result);
}
