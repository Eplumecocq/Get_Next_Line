/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:21:07 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/04 11:27:13 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_avoid(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char			*ft_strtrim(char const *s)
{
	char	*ss1;
	char	*pt1;
	int		length;

	length = ft_strlen(s);
	while (ft_avoid(*s) && *s++)
		length--;
	pt1 = (char *)s;
	while (*pt1)
		pt1++;
	while (ft_avoid(*(--pt1)) && pt1 != s)
		length--;
	if (length <= 0)
		length = 0;
	ss1 = ft_strsub(s, 0, length);
	return (ss1);
}
