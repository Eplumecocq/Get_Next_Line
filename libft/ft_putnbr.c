/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:53:32 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/04 11:30:00 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	i;

	if (n < 0)
	{
		i = n * -1;
		ft_putchar('-');
	}
	else
		i = n;
	if (i < 10)
	{
		ft_putchar(i + 48);
		return ;
	}
	ft_putnbr(i / 10);
	ft_putchar(i % 10 + 48);
}
