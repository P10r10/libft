/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:45:37 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/17 15:24:05 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t tmp_len;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len--)
	{
		if (*haystack == *needle)
		{
			i = 1;
			tmp_len = len;
			while ((haystack[i] == needle[i]) && haystack[i] &&
				needle[i] && tmp_len--)
				i++;
			if (needle[i] == '\0')
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
