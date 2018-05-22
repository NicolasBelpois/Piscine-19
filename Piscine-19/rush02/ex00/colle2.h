/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karbenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 12:10:51 by karbenna          #+#    #+#             */
/*   Updated: 2018/05/20 18:41:23 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE2_H
# define COLLE2_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	getandcheck(void);
void	strcombo(char **src, char c, int i);
void	gcolle(int l, int c, char *input, int *i);
void	creator(char *pattern, int l, int c, char **colle);
void	ft_printcolle(int nb, int c, int l, int i);
int		ft_strcmp(char *s1, char *s2);
int		ft_strcount(char *str);

#endif
