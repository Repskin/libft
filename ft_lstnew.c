/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburnouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:27:17 by tburnouf          #+#    #+#             */
/*   Updated: 2017/09/27 14:27:18 by tburnouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	content_size = content == NULL ? 0 : content_size;
	list->content_size = content_size;
	if (!(list->content = malloc(content_size)))
		return (NULL);
	list->content = content ?
		ft_memcpy(list->content, (void*)content, content_size) : NULL;
	list->next = NULL;
	return (list);
}
