/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:28:26 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/26 18:28:27 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t len)
{
	unsigned char *strsrc;

	strsrc = (unsigned char*)src;
	while (len > 0 && *strsrc != (unsigned char)c)
	{
		len--;
		strsrc++;
	}
	if (len == 0)
		return (NULL);
	else
		return (strsrc);
}
