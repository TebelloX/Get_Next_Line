/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 15:33:56 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/18 15:47:38 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	if (needle[i] == '\0' && haystack[i] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = i;
		k = 0;
		if (needle[k] == '\0')
			return ((char *)haystack + i);
		while (haystack[j] && needle[k] && haystack[j] == needle[k] && j < len)
		{
			k++;
			j++;
			if (needle[k] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
