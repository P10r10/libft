/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 20:14:55 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/19 20:20:09 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	char	is_word;

	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c && !is_word)
		{
			is_word = 1;
			count++;
		}
		if (*s == c)
			is_word = 0;
		s++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**begin;
	char	**res;
	char	*word;

	if (!s)
		return (NULL);
	if (!(res = malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
		return (NULL);
	begin = res;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue;
		}
		word = (char *)s;
		while ((*s != c) && *s)
			s++;
		if (!(*res = (char *)malloc(s - word + 1)))
			return (NULL);
		ft_strlcpy(*res++, word, s - word + 1);
	}
	*res = NULL;
	return (begin);
}
