/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:18:29 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/02 18:03:04 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pp1;
	unsigned char	*pp2;
	size_t			i;

	pp1 = (unsigned char *)s1;
	pp2 = (unsigned	char *)s2;
	i = 0;
	if (!pp1 && !pp2 && !n)
		return (0);
	while (i < n)
	{
		if (pp1[i] != pp2[i])
			return (pp1[i] - pp2[i]);
		i++;
	}
	return (0);
}
