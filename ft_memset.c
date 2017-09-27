/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:29:06 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/26 18:29:12 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int data, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char*)str;
	while (len-- > 0)
		*ptr++ = (unsigned char)data;
	return (str);
}
