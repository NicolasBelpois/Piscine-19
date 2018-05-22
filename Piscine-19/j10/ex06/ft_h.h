/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 10:00:02 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/15 17:24:13 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_H
# define FT_FT_H

# include <unistd.h>

int	ft_add(int a, int b);
int	ft_sous(int a, int b);
int	ft_mult(int a, int b);
int	ft_div(int a, int b);
int	ft_mod(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	ft_putstr(char *str);
int	ft_atoi(char *str);
int	ft_divmod_0(char o, int b);

#endif
