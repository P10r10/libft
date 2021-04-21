/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:16:47 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/11 18:56:38 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	int				cmp;

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
