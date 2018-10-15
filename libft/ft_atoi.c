/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:40:19 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/19 10:05:05 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				negative;
	long long		result;
	long long		counter;

	result = 0;
	counter = 0;
	negative = 0;
	while (str[counter] == ' ' || str[counter] == '\t' ||
			str[counter] == '\v' || str[counter] == '\f' ||
			str[counter] == '\r' ||
			str[counter] == '\n')
		counter++;
	if (str[counter] == '-')
		negative = 1;
	if (str[counter] == '-' || str[counter] == '+')
		counter++;
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		result = (result * 10 + str[counter] - '0');
		counter++;
	}
	if (negative == 1)
		return (-result);
	else
		return (result);
}
