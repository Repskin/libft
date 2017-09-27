/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:24:38 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/26 18:24:40 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_length_word(char const *s, char c)
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
