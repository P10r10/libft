/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:13:51 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/11 17:41:11 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*ptr_dest;
	unsigned const char	*ptr_src;
	unsigned char		uch;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned const char *)src;
	uch = (unsigned char)c;
	while (n--)
	{
		if (*ptr_src == uch)
		{
			*ptr_dest = *ptr_src;
			return (++ptr_dest);
		}
		*ptr_dest++ = *ptr_src++;
	}
	return (NULL);
}
