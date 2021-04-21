/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:20:11 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/17 18:26:30 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		is_in_set(char const *set, char c)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

static size_t	ft_find_start(char const *s1, char const *set)
{
	size_t start;
	size_t len_s1;

	len_s1 = ft_strlen(s1);
	start = 0;
	while (is_in_set(set, *s1) && *s1)
	{
		start++;
		s1++;
	}
	if (start >= len_s1)
		start = 0;
	return (start);
}

static size_t	ft_find_end(char const *s1, char const *set)
{
	size_t	end;
	char	*temp;

	temp = (char *)s1;
	end = ft_strlen(s1);
	temp += end;
	while (is_in_set(set, *--temp) && end--)
		;
	return (end);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*res;
	char	*begin;

	if (!set || !s1)
		return (NULL);
	size = ft_find_end(s1, set) - ft_find_start(s1, set);
	res = (char *)malloc(size + 1);
	if (!res)
		return (NULL);
	begin = res;
	s1 += ft_find_start(s1, set);
	while (size--)
		*res++ = *s1++;
	*res = '\0';
	return (begin);
}
