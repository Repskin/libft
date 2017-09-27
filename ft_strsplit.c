/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:36:14 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/27 11:30:41 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	char	*str;
	size_t	nb_words;
	size_t	num_word;
	size_t	i;

	if (!s || !c)
		return (NULL);
	nb_words = ft_compt_word(s, c);
	num_word = 0;
	i = 0;
	tab = (char**)malloc(sizeof(char*) * (nb_words + 1));
	while (num_word < nb_words)
	{
		i = 0;
		str = (char*)malloc(sizeof(char) * (ft_length_word(str, c) + 1));
		if (!str || !tab)
			return (NULL);
		while (s[0] == c && s[0])
			s++;
		while (s[0] != c && s[0])
			str[i++] = *s++;
		str[i] = '\0';
		tab[num_word++] = str;
	}
	tab[num_word] = 0;
	return (tab);
}
