/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:31:46 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/27 14:31:46 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*chaine;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	chaine = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!chaine)
		return (NULL);
	ft_strcpy(chaine, s1);
	ft_strcat(chaine, s2);
	return (chaine);
}
