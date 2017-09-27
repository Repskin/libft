/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:28:58 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/26 18:28:59 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*x;
	char		*y;

	x = (char *)dst;
	y = (char *)src;
	if (x > y)
	{
		while (len--)
			x[len] = y[len];
	}
	else
		ft_memcpy(x, y, len);
	return (x);
}
