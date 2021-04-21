/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 19:52:32 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/11 19:58:37 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *alloc;

	alloc = (unsigned char*)malloc(size * nmemb);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, size * nmemb);
	return (alloc);
}
