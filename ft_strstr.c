/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:36:27 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/26 18:36:28 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char *ts1;
	char *ts2;

	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1)
	{
		ts1 = (char *)s1;
		ts2 = (char *)s2;
		while (*ts2 && *ts1 == *ts2)
		{
			ts1++;
			ts2++;
		}
		if (*ts2 == '\0')
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
