/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 16:06:03 by ckatz             #+#    #+#             */
/*   Updated: 2017/08/07 18:20:00 by ckatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*sub_str;

	if (!s)
		return (NULL);
	sub_str = ft_strnew(len);
	if (!sub_str)
		return (NULL);
	j = 0;
	while (len > 0)
	{
		sub_str[j] = s[start];
		j++;
		start++;
		len--;
	}
	return (sub_str);
}
