/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:28:16 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/26 18:28:18 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *strsrc;
	char *strdst;

	strsrc = (char*)src;
	strdst = (char*)dst;
	while (n > 0 && *strsrc != c)
	{
		n--;
		*strdst++ = *strsrc++;
	}
	if (n > 0)
	{
		*strdst++ = *strsrc++;
		return ((void*)strdst);
	}
	else
		return (NULL);
}
