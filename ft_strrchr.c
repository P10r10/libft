/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:17:19 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/13 11:45:32 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	unsigned char	uch;
	size_t			len;

	uch = (unsigned char)ch;
	len = ft_strlen(str);
	str += len;
	len++;
	while (len--)
	{
		if (*str == uch)
			return (char*)str;
		str--;
	}
	return (NULL);
}
