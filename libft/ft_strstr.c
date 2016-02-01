/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:19:24 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/08 16:27:00 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

char			*ft_strstr(const char *s1, const char *s2)
{
	int			size;
	const char	*str;

	size = ft_strlen(s2);
	str = s1;
	if (!*s2)
		return ((char *)s1);
	while (*str)
	{
		if (ft_strnequ(str, s2, size) == 1)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
