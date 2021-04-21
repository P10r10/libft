/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:14:38 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/17 13:41:17 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	unsigned const char	*ptr_src;

	ptr_dest = (unsigned char*)dest;
	ptr_src = (unsigned const char*)src;
	if (ptr_dest == NULL && ptr_src == NULL)
		return (NULL);
	if (src > dest)
		ft_memcpy(dest, src, n);
	else if (ptr_src < ptr_dest)
	{
		ptr_dest += n;
		ptr_src += n;
		while (n--)
			*--ptr_dest = *--ptr_src;
	}
	return (dest);
}
