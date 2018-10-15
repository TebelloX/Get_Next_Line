/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:16:44 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/18 15:33:14 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	if (needle[i] == '\0' && haystack[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = i;
		k = 0;
		if (needle[k] == '\0')
			return ((char *)haystack + i);
		while (haystack[j] && needle[k] && haystack[j] == needle[k])
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
