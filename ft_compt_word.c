/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compt_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:19:45 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/26 18:19:46 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_compt_word(char const *s, char c)
{
	size_t	nb;
	size_t	i;
	int		boolean;

	i = 0;
	nb = 0;
	boolean = 1;
	while (s[i])
	{
		if (s[i] != c && boolean)
		{
			nb++;
			boolean = 0;
		}
		else if (s[i] == c)
			boolean = 1;
		i++;
	}
	return (nb);
}
