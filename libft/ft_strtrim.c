/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 09:41:59 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/19 10:54:45 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t			len;
	char			*fresh;
	unsigned int	start;
	unsigned int	finish;

	if (!(s))
		return (NULL);
	if (ft_strlen(s) == 0)
		return ("");
	start = 0;
	finish = ft_strlen(s) - 1;
	while ((s[start] == ' ' || s[start] == '\n' ||
				s[start] == '\t') && (start < ft_strlen(s)))
		start++;
	while ((s[finish] == ' ' || s[finish] == '\n' ||
				s[finish] == '\t') && (finish > start))
		finish--;
	len = finish - start + 1;
	fresh = ft_strsub(s, start, len);
	return (fresh);
}
