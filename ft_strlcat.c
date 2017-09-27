/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:31:53 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/27 14:31:54 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;
	int src_size;
	int dst_size;
	int space_left;

	i = 0;
	dst_size = 0;
	space_left = size;
	while (src[i])
		i++;
	src_size = i;
	while (dst[dst_size] && space_left-- != 0)
		dst_size++;
	space_left = size - dst_size;
	if (space_left == 0)
		return ((size_t)(size + src_size));
	i = 0;
	j = dst_size;
	while (src[i] != 0 && space_left-- > 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return ((size_t)(src_size + dst_size));
}
