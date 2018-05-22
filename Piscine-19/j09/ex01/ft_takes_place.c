/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 15:09:36 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/11 15:24:02 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	*am;
	char	*pm;
	int		*notnb;

	notnb = 0;
	if (hour > 24 || hour < 0)
		printf("%d\n", *notnb);
	am = "A.M.";
	pm = "P.M.";
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 11)
		printf("%i.00 %s AND %i.00 %s\n", hour, am, hour + 1, pm);
	else if (hour == 12)
		printf("%i.00 %s AND %i.00 %s\n", hour, pm, 1, pm);
	else if (hour == 23)
		printf("%i.00 %s AND %i.00 %s\n", hour - 12, am, (hour - 12) + 1, pm);
	else if (hour == 24)
		printf("%i.00 %s AND %i.00 %s\n", hour - 12, am, 1, am);
	else if (hour > 12)
		printf("%i.00 %s AND %i.00 %s\n", hour - 12, pm, (hour - 12) + 1, pm);
	else if (hour < 10)
		printf("0%i.00 %s AND 0%i.00 %s\n", hour, am, hour + 1, am);
	else
		printf("%i.00 %s AND %i.00 %s\n", hour, am, hour + 1, am);
}
