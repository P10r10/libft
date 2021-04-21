/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:14:10 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/11 18:53:11 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	int				cmp;

	if (n == 0 || (s1 == s2))
		return (0);
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	cmp = 0;
	while (n--)
	{
		if (*ss1 != *ss2)
		{
			cmp = *ss1 - *ss2;
			break ;
		}
		ss1++;
		ss2++;
	}
	return (cmp);
}
