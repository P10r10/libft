/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:19:01 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/13 14:20:15 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;
	char *begin;

	if (start >= ft_strlen(s))
	{
		res = (char *)malloc(1);
		*res = '\0';
		return (res);
	}
	s += start;
	begin = (char *)s;
	while (*s && len--)
		s++;
	res = (char *)malloc(s - begin + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, begin, s - begin + 1);
	return (res);
}
