/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:34:53 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/26 18:34:54 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (*s2 && n)
	{
		i = ft_strlen(s1);
		j = 0;
		while (*(s2 + j) && j < n)
		{
			*(s1 + i + j) = *(s2 + j);
			j++;
		}
		*(s1 + i + j) = 0;
	}
	return (s1);
}