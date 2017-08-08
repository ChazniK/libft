/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 15:32:49 by ckatz             #+#    #+#             */
/*   Updated: 2017/08/07 14:44:52 by ckatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*conv_str;
	size_t			i;

	i = 0;
	conv_str = str;
	while (i < len)
	{
		conv_str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
