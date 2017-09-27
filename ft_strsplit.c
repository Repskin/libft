/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:33:54 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/27 14:33:54 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	compt_word(char const *s, char c)
{
	size_t	nb;
	size_t	i;
	int		boolean;

	i = 0;
	nb = 0;
	boolean = 1;
	if (!s || !c)
		return (0);
	while (s[i])
	{
		if (s[i] != c && boolean)
		{
			nb++;
			boolean = 0;
		}
		else if (s[i] == c)
			boolean = 1;
		i++;
	}
	return (nb);
}

static size_t	lenght_word(char const *s, char c)
{
	size_t lenght;
	size_t i;

	lenght = 0;
	i = 0;
	if (!s || !c)
		return (0);
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		lenght++;
	}
	return (lenght);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	char	*str;
	size_t	nb_words;
	size_t	num_word;
	size_t	i;

	nb_words = compt_word(s, c);
	num_word = 0;
	i = 0;
	tab = (char**)malloc(sizeof(char*) * (nb_words + 1));
	while (num_word < nb_words)
	{
		i = 0;
		str = (char*)malloc(sizeof(char) * (lenght_word(str, c) + 1));
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
