/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 19:40:52 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/11 19:46:59 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *dup;
	char *begin;

	dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	begin = dup;
	while ((*dup++ = *s++))
		;
	return (begin);
}
