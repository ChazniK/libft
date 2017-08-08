/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 13:10:22 by ckatz             #+#    #+#             */
/*   Updated: 2017/08/08 15:09:45 by ckatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new_str;

	new_str = (char*)malloc(sizeof(char) * size + 1);
	if (!new_str)
		return (NULL);
	ft_bzero(new_str, size + 1);
	return (new_str);
}
