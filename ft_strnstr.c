/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:35:52 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/26 18:35:53 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*ts1;
	char	*ts2;
	size_t	i;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1)
	{
		ts1 = (char *)s1;
		ts2 = (char *)s2;
		while (*ts2 && *ts1 == *ts2 && i < n)
		{
			ts1++;
			ts2++;
			i++;
		}
		if (*ts2 == '\0')
			return ((char *)s1);
		s1++;
		i++;
	}
	return (NULL);
}
