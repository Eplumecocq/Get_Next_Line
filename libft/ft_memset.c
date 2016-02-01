/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:16:16 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/02 17:41:10 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pos;
	size_t			i;

	i = 0;
	pos = (unsigned char *)b;
	while (i < len)
	{
		pos[i] = c;
		i++;
	}
	return (b);
}
