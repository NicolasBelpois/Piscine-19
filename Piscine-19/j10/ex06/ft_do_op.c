/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 09:23:44 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/15 13:15:21 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_add(int a, int b)
{
	int ret;

	ret = a + b;
	return (ret);
}

int	ft_sous(int a, int b)
{
	int ret;

	ret = a - b;
	return (ret);
}	
int	ft_mult(int a, int b)
{
	int ret;

	ret = a * b;
	return (ret);
}
int	ft_div(int a, int b)
{
	int ret;

	ret = a / b;
	return (ret);
}
int	ft_mod(int a, int b)
{
	int ret;

	ret = a % b;
	return (ret);
}
