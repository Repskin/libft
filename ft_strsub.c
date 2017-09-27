/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:34:09 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/27 14:34:09 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*chaine;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	chaine = ft_strnew(len);
	if (!chaine)
		return (NULL);
	while (i < len)
	{
		chaine[i] = s[start];
		i++;
		start++;
	}
	return (chaine);
}
