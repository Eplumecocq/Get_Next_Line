/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:39:57 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/11 16:31:46 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ptdst;
	const char	*ptsrc;

	ptdst = (char *)dst;
	ptsrc = (const char *)src;
	if (ptsrc <= ptdst)
	{
		ptsrc = (ptsrc + (len - 1));
		ptdst = (ptdst + (len - 1));
		while (len--)
		{
			*ptdst-- = *ptsrc--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
