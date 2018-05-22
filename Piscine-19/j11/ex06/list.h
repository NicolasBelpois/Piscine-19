/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 20:52:36 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/16 09:00:24 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

void					*ft_create_elem(void *data);

typedef struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

#endif
