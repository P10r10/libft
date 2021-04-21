/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 21:15:08 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/19 21:51:33 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_char(long x)
{
	size_t count;

	count = 0;
	if (x <= 0)
	{
		count++;
		x = -x;
	}
	while (x > 0)
	{
		x /= 10;
		count++;
	}
	return (count);
}

static char		*reverse(char *s, size_t len)
{
	char	tmp;
	size_t	i;
	size_t	j;
	size_t	count;

	count = len / 2;
	i = 0;
	j = len - 1;
	while (count--)
	{
		tmp = s[i];
		s[i++] = s[j];
		s[j--] = tmp;
	}
	return (s);
}

static char		ft_isneg(long n, char *neg)
{
	if (n < 0)
	{
		*neg = 1;
		return (1);
	}
	else
		return (0);
}

char			*ft_itoa(int n)
{
	long	nb;
	char	*res;
	char	*begin;
	size_t	len;
	char	neg;

	neg = 0;
	nb = (long)n;
	len = count_char(nb);
	if (ft_isneg(nb, &neg))
		nb = -nb;
	if (!(res = (char *)malloc(len + 1)))
		return (NULL);
	begin = res;
	while (len-- && nb > 0)
	{
		*res++ = nb % 10 + '0';
		nb /= 10;
	}
	if (neg)
		*res++ = '-';
	if (n == 0)
		*res++ = '0';
	*res = '\0';
	return (reverse(begin, ft_strlen(begin)));
}
