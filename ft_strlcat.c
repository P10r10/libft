/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:15:02 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/11 18:55:34 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t size)
{
	char *ptr;

	ptr = ft_memchr(s, '\0', size);
	if (ptr == NULL)
		return (size);
	else
		return (ptr - s);
}

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t srclen;
	size_t dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strnlen(dest, size);
	if (dstlen == size)
		return (size + srclen);
	if (srclen < size - dstlen)
		ft_memcpy(dest + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dest + dstlen, src, size - dstlen - 1);
		dest[size - 1] = '\0';
	}
	return (dstlen + srclen);
}
