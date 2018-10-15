/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:42:09 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/19 08:47:36 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*in;
	unsigned char	*out;

	i = 0;
	in = (unsigned char *)dst;
	out = (unsigned char *)src;
	while (n > 0)
	{
		in[i] = out[i];
		i++;
		n--;
	}
	return (dst);
}
