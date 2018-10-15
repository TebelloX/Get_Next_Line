/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:49:04 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/19 10:54:30 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*fresh;
	unsigned int	i;

	i = 0;
	fresh = (char *)malloc(sizeof(char) * (size + 1));
	if (!(fresh))
		return (NULL);
	else
		while (i <= size)
		{
			fresh[i] = '\0';
			i++;
		}
	return (fresh);
}
