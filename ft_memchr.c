/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:14:04 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/11 18:23:17 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char uch;

	ptr = (unsigned char*)s;
	uch = (unsigned char)c;
	while (n--)
	{
		if (*ptr == uch)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
