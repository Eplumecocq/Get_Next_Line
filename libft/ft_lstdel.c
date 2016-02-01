/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:18:19 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/04 17:48:34 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*stock;
	t_list	*adress;

	stock = *alst;
	while (stock)
	{
		adress = stock->next;
		del(stock->content, stock->content_size);
		free(stock);
		stock = adress;
	}
	*alst = NULL;
}
