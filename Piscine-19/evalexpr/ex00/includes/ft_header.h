/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:53:28 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/20 18:03:46 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_atoi(char **str);
int		find_nb(char **str);
int		find_sum(char **str);
int		find_op(char **str);
int		eval_expr(char *str);

#endif
