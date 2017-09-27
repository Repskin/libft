/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:28:34 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/27 14:28:34 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*txt;

	txt = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		txt[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
