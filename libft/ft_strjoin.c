/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:51:12 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/05 14:52:17 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (new)
	{
		while (s1[j])
			new[i++] = s1[j++];
		j = 0;
		while (s2[j])
			new[i++] = s2[j++];
		new[i] = '\0';
	}
	return (new);
}
