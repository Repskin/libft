/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:33:38 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/27 14:33:39 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	pos;

	i = 0;
	j = 0;
	if (little[0] == 0 || !little)
		return ((char *)&big[0]);
	while (big[i] && i < len)
	{
		if (little[j] == big[i] && i < len)
		{
			pos = i;
			while (little[j] == big[i] && i < len && big[i++])
			{
				j++;
			}
			if (little[j] == 0)
				return ((char *)&big[pos]);
			i = pos + 1;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
