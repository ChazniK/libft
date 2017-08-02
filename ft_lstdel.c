/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 17:52:53 by ckatz             #+#    #+#             */
/*   Updated: 2017/07/31 17:46:44 by ckatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*holder;

	list = *alst;
	while (list != NULL)
	{
		holder = list->next;
		del(list->content, list->content_size);
		free(list);
		list = holder;
	}
	*alst = NULL;
}
