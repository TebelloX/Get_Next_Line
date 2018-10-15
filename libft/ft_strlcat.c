/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 13:50:32 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/18 18:08:25 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dest;

	dest = ft_strlen(dst);
	if (dest > dstsize)
		return (ft_strlen(src) + dstsize);
	if (dest < dstsize)
	{
		ft_strncat(dst, src, (dstsize - ft_strlen(dst) - 1));
	}
	return (dest + ft_strlen(src));
}
