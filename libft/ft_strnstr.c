/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:58:33 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/02 17:43:03 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2len;

	s2len = ft_strlen(s2);
	while (*s1 && n > 0)
	{
		if (!ft_memcmp(s1, s2, s2len) && s2len <= n)
			return (char *)s1;
		n--;
		s1++;
	}
	return (0);
}
