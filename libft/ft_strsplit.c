/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:02:11 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/05 17:09:58 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int		strlen_wd(const char *s, char c)
{
	if (*s && *s != c)
		return (strlen_wd(s + 1, c) + 1);
	return (0);
}

static int		lentab(const char *s, char c)
{
	if (!*s)
		return (1);
	if (*s != c)
		return (lentab(s + 1, c));
	while (*s && *s == c)
		s++;
	return (lentab(s, c) + 1);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		size;
	int		i;

	size = lentab(s, c) + 1;
	tab = (char **)malloc(sizeof(char*) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			size = strlen_wd(s, c);
			tab[i++] = ft_strsub(s, 0, size);
			s = s + size;
		}
		else
			++s;
	}
	tab[i] = NULL;
	return (tab);
}
