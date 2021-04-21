/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 20:31:58 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/19 20:32:11 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;
	t_list *bak;

	tmp = *lst;
	while (tmp != NULL)
	{
		bak = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = bak;
	}
	*lst = NULL;
}
