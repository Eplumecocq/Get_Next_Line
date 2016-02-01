/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:36:17 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/05 14:54:30 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	result = ft_strlen(src);
	while (dst[i] && i < size)
		i++;
	if (size)
	{
		while (src[j] && i < size - 1)
			dst[i++] = src[j++];
	}
	if (j > 0)
	{
		dst[i] = '\0';
		return (result + (i - j));
	}
	return (result + i);
}
