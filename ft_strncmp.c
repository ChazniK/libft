/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 15:49:54 by ckatz             #+#    #+#             */
/*   Updated: 2017/08/07 16:36:40 by ckatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*u1;
	unsigned char	*u2;

	u1 = (unsigned char*)s1;
	u2 = (unsigned char*)s2;
	i = 0;
	while (((u1[i] == u2[i]) && (i < n)) && (u1[i] != '\0' && u2[i] != '\0'))
	{
		i++;
	}
	if (i == n)
		i--;
	return (u1[i] - u2[i]);
}
