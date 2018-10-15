/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memalloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:00:11 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/18 09:41:27 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*fresh;

	if (size > 65535)
		return (NULL);
	fresh = (char *)malloc((sizeof(char)) * (size + 1));
	if (fresh == NULL)
		return (NULL);
	ft_memset(fresh, 0, size);
	return (fresh);
}
