/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 10:10:07 by nbelpois          #+#    #+#             */
/*   Updated: 2018/05/11 13:57:34 by nbelpois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char s)
{
	if ((s == '\n') || (s == ' ') || (s == '\t') || (s == '\0'))
		return (1);
	else
		return (0);
}

int		get_words(char *str)
{
	int i;
	int	nb_words;
	int	is_word;

	i = 0;
	nb_words = 0;
	is_word = 0;
	while (str[i])
	{
		if (((is_space(str[i])) != 1) && (is_word != 1))
		{
			is_word = 1;
			nb_words++;
		}
		if (((is_space(str[i])) == 1) && (is_word == 1))
			is_word = 0;
		i++;
	}
	return (nb_words);
}

int		find_fchar_length(char *str, int f, int *len)
{
	int	is_word;
	int	start;

	is_word = 0;
	start = 0;
	while (str[f])
	{
		if (((is_space(str[f])) != 1) && (is_word != 1))
		{
			start = f;
			is_word = 1;
			while ((is_space(str[f])) != 1)
				f++;
			*len = f - start;
			break ;
		}
		f++;
	}
	return (start);
}

void	ft_last_entry(char **tab, char *str)
{
	tab[get_words(str)] = (char*)(malloc(sizeof(char)));
	*tab[get_words(str)] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab_words;
	int		entry1;
	int		entry2;
	int		entry3;
	int		temp;

	entry1 = 0;
	entry2 = 0;
	tab_words = (char**)malloc(sizeof(char*) * (get_words(str) + 1));
	while (entry1 < get_words(str))
	{
		entry2 = find_fchar_length(str, entry2, &temp);
		tab_words[entry1] = (char*)malloc(sizeof(char) * (temp + 1));
		entry3 = 0;
		while (entry3 < temp)
		{
			tab_words[entry1][entry3] = str[entry2];
			entry2++;
			entry3++;
		}
		tab_words[entry1][entry3] = '\0';
		entry1++;
	}
	ft_last_entry(tab_words, str);
	return (tab_words);
}
