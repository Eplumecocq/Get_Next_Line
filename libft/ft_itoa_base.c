/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 16:36:55 by eplumeco          #+#    #+#             */
/*   Updated: 2016/01/28 18:05:20 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

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

char			*ft_itoa_base(int n, int base)
{
	char	*str;
	int		len;
	int		sign;

	if (base < 2 || base > 16)
		return (NULL);
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
		*--str = "0123456789ABCDEF"[ft_absolut(n % base)];
		n = n / base;
	}
	if (sign)
		*--str = '-';
	return (str);
}
