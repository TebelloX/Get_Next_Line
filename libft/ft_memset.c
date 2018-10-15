/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:49:12 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/09 11:34:45 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned int	i;

	i = 0;
	p = (unsigned char *)b;
	while (len)
	{
		p[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (p);
}
