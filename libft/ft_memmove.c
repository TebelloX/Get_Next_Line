/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 10:08:35 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/11 18:21:27 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*dest;
	unsigned char			*sour;
	unsigned int			i;

	dest = (unsigned char *)dst;
	sour = (unsigned char *)src;
	if (sour > dest)
	{
		i = 0;
		while (i < len)
		{
			dest[i] = sour[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[len - i - 1] = sour[len - i - 1];
			i++;
		}
	}
	return ((void *)dst);
}
