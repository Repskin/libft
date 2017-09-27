/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:27:35 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/27 14:27:35 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *src2;
	char *dst2;

	src2 = (char*)src;
	dst2 = (char*)dst;
	while (n > 0 && *src2 != c)
	{
		n--;
		*dst2++ = *src2++;
	}
	if (n > 0)
	{
		*dst2++ = *src2++;
		return ((void*)dst2);
	}
	else
		return (NULL);
}
