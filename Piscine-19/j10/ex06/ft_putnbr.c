/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 09:19:32 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/15 09:21:08 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void	ft_putnbr(int nb)
{	
	if (nb == -2147483648)
	{	
		ft_putchar('-');		
		ft_putchar('2');
		ft_putnbr(147483648);		
	}	
	else	
	{	
		if (nb == 0)		
		{		
			ft_putchar('0');			
		}		
		if (nb < 0)		
		{		
			ft_putchar('-');			
			nb = -nb;			
		}		
		if (nb > 0)		
		{		
			ft_putnbr(nb / 10);			
			ft_putchar((nb % 10) + '0');			
		}		
	}
}


