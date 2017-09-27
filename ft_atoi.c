/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:19:18 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/26 18:19:20 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	is_neg;
	int	number;

	is_neg = 0;
	number = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == 45)
		is_neg = 1;
	if ((*str == 45) || (*str == 43))
		str++;
	while ((*str >= 48) && (*str <= 57))
	{
		number *= 10;
		number += ((int)*str - 48);
		str++;
	}
	if (is_neg)
		return (-number);
	else
		return (number);
}
