/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 11:13:00 by tnamo             #+#    #+#             */
/*   Updated: 2018/07/04 16:52:22 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_container(char **line, char *point)
{
	char	*tmp;
	int		i;

	i = 0;
	while (point[i] != '\0' && point[i] != '\n')
		i++;
	*line = ft_strsub(point, 0, i);
	if (ft_strcmp(*line, point) == 0)
		point = NULL;
	else
	{
		tmp = point;
		point = ft_strsub(point, i + 1, ft_strlen(point + i + 1));
		free(tmp);
	}
	return (point);
}

static char		*ft_free_strjoin(char *s1, char *s2)
{
	size_t		len;
	char		*joined_str;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	if (!(joined_str = ft_strnew(len)))
		return (NULL);
	joined_str = ft_strcat(joined_str, s1);
	free(s1);
	joined_str = ft_strcat(joined_str, s2);
	return (joined_str);
}

int				get_next_line(const int fd, char **line)
{
	static char		*point;
	char			buff[BUFF_SIZE + 1];
	int				value;

	if (fd < 0 || !line || read(fd, buff, 0) < 0)
		return (-1);
	if (point == NULL)
		point = ft_strnew(0);
	while ((value = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[value] = '\0';
		point = ft_free_strjoin(point, buff);
		if (ft_strchr(point, '\n'))
			break ;
	}
	if ((value < BUFF_SIZE) && !ft_strlen(point))
		return (0);
	point = ft_container(line, point);
	return (1);
}
