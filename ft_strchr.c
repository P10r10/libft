/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:14:48 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/13 10:41:41 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strchr(const char *str, int ch)
{
	unsigned char uch;

	uch = (unsigned char)ch;
	while (*str)
	{
		if (*str == uch)
			return (char *)str;
		str++;
	}
	if (uch == '\0')
		return (char *)str;
	return (NULL);
}
