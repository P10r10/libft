/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 20:28:45 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/19 20:31:34 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		count;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	count = ft_lstsize(lst);
	tmp = lst;
	while (--count)
		tmp = tmp->next;
	return (tmp);
}
