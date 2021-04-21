/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:14:26 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/11 18:05:07 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	unsigned const char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned const char *)src;
	if (ptr_dest == NULL && ptr_src == NULL)
		return (NULL);
	while (n--)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
