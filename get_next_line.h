/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 15:15:21 by eplumeco          #+#    #+#             */
/*   Updated: 2016/02/01 18:07:39 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 123

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

int	get_next_line(int const fd, char **line);

#endif
