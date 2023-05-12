/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:19:12 by cldias            #+#    #+#             */
/*   Updated: 2023/04/14 04:48:38 by cldias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(char *str, int fd)
{
	char	*buff;
	int		nb_bytes;

	nb_bytes = 1;
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (!ft_strchr(str, '\n') && nb_bytes != 0)
	{
		nb_bytes = read(fd, buff, BUFFER_SIZE);
		if (nb_bytes == -1)
		{
			free(buff);
			free(str);
			return (NULL);
		}
		buff[nb_bytes] = '\0';
		str = ft_strjoin(str, buff);
	}
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = read_file(str, fd);
	if (!str)
		return (NULL);
	line = clean_line(str);
	str = new_str(str);
	return (line);
}
