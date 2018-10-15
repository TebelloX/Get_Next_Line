/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:55:21 by tnamo             #+#    #+#             */
/*   Updated: 2018/07/02 14:41:43 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*fresh;

	i = 0;
	if (s == NULL)
		return (NULL);
	fresh = ft_strnew(len);
	if (!(fresh))
		return (NULL);
	while (i < len)
	{
		fresh[i] = s[start + i];
		i++;
	}
	return (fresh);
}
