/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 15:16:28 by eplumeco          #+#    #+#             */
/*   Updated: 2016/02/01 17:59:14 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

static int		addup_line(char **line, char *stock)
{
	char	*new_line;

	new_line = ft_strchr(stock, '\n');
	if (new_line)
	{
		*new_line = '\0';
		*line = ft_strdup(stock);
		new_line++;
		ft_memmove(stock, new_line, ft_strlen(new_line) + 1);
		return (1);
	}
	if (ft_strlen(stock) > 0)
	{
		*line = ft_strdup(stock);
		*stock = '\0';
		return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char	*archive[256];
	char		buff[BUFF_SIZE + 1];
	int			ret;
	char		*tmp;

	if (fd < 0 || !line)
		return (-1);
	if (archive[fd] == NULL)
		archive[fd] = ft_strnew(0);
	while (!ft_strchr(archive[fd], '\n'))
	{
		ret = read(fd, buff, BUFF_SIZE);
		if (ret == -1)
			return (ret);
		if (ret == 0)
			return (addup_line(line, archive[fd]));
		buff[ret] = '\0';
		tmp = ft_strjoin(archive[fd], buff);
		ft_strdel(&archive[fd]);
		archive[fd] = tmp;
	}
	return (addup_line(line, archive[fd]));
}
