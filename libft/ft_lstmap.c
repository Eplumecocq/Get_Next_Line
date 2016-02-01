/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 18:12:33 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/05 13:32:43 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ls1;
	t_list	*temp;
	t_list	*new1;

	new1 = f(lst);
	if ((ls1 = ft_lstnew(new1->content, new1->content_size)))
	{
		temp = ls1;
		lst = lst->next;
		while (lst)
		{
			new1 = f(lst);
			if (!(temp->next = ft_lstnew(new1->content, new1->content_size)))
				return (NULL);
			temp = temp->next;
			lst = lst->next;
		}
	}
	return (ls1);
}
