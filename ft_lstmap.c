/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 20:26:58 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/20 11:39:27 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *tmp;
	t_list *res;
	t_list *elem;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	tmp = lst;
	while (tmp)
	{
		elem = ft_lstnew(f(tmp->content));
		if (!elem)
		{
			ft_lstclear(&elem, del);
			return (NULL);
		}
		ft_lstadd_back(&res, elem);
		tmp = tmp->next;
	}
	return (res);
}
