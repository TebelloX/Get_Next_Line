/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 09:04:18 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/18 17:15:07 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_num_length(int n)
{
	unsigned int	count;
	unsigned int	num;

	count = 0;
	if (n < 0)
	{
		num = (unsigned int)-n;
		count++;
	}
	else
		num = (unsigned int)n;
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

static char				*ft_int_str(int n, char *str, unsigned int position)
{
	unsigned int	num;

	position--;
	if (n < 0)
	{
		num = -n;
		str[0] = '-';
	}
	else
		num = n;
	if (num >= 10)
	{
		ft_int_str((num / 10), str, position);
		str[position] = ((num % 10) + '0');
	}
	else
		str[position] = (num + '0');
	return (str);
}

char					*ft_itoa(int n)
{
	unsigned int	len;
	char			*str;

	len = ft_num_length(n);
	if (n == 0)
	{
		if (!(str = ft_strnew(1)))
			return (NULL);
		str[0] = '0';
	}
	else
	{
		if (!(str = ft_strnew(len)))
			return (NULL);
		str = ft_int_str(n, str, len);
	}
	return (str);
}
