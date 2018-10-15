/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 10:12:07 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/14 15:31:18 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_numwords(char *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	if (!(s))
		return (0);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (i == 0 && s[i] != 0)
			word++;
		else if (s[i] != c && s[i - 1] == c)
			word++;
		i++;
	}
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**split;
	int			words;
	int			len_word;
	int			index;

	index = 0;
	words = ft_numwords((char *)s, c);
	if ((split = (char **)malloc((sizeof(char *) * words + 1))))
	{
		len_word = 0;
		while (index < words)
		{
			while (*s == c)
				s++;
			while (*s != c && *s)
			{
				len_word++;
				s++;
			}
			split[index++] = ft_strsub(s - len_word, 0, len_word);
			len_word = 0;
		}
		split[index] = 0;
	}
	return (split);
}
