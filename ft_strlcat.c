/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:33:21 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/26 18:33:22 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t ret;

	ret = ft_strlen(src) + ft_strlen(dst);
	if (size >= ft_strlen(dst))
	{
		ft_strncat(dst, src, size - ft_strlen(dst) - 1);
		return (ret);
	}
	return (size + ft_strlen(src));
}
