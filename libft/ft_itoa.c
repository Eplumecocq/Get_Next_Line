/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:28:35 by eplumeco          #+#    #+#             */
/*   Updated: 2016/01/28 18:03:22 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		count_wd(int nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		return (1);
	else
	{
		while (nb != 0)
		{
			nb = nb / 10;
			len++;
		}
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	len = count_wd(n);
	sign = (n < 0 ? 1 : 0);
	if (!(str = (char *)malloc(sizeof(char) * (len + sign + 1))))
		return (NULL);
	str = str + len + sign;
	*str = '\0';
	if (n == 0)
		*--str = '0';
	while (n != 0)
	{
		*--str = ft_absolut(n % 10) + 48;
		n = n / 10;
	}
	if (sign)
		*--str = '-';
	return (str);
}
