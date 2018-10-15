/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 16:17:15 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/18 18:12:02 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(const char *s1, const char *s2)
{
	char			*result;
	unsigned int	i;
	unsigned int	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc((ft_strlen(s2)) + (1 + ft_strlen(s1)));
	if (result != NULL)
	{
		i = -1;
		while (s1[++i] != '\0')
		{
			result[i] = s1[i];
		}
		j = -1;
		while (s2[++j] != '\0')
		{
			result[i] = s2[j];
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	else
		return (NULL);
}
