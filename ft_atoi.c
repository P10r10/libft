/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:59:52 by alsantia          #+#    #+#             */
/*   Updated: 2021/02/13 11:00:16 by alsantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\r' ||
		c == '\t' || c == '\v' || c == '\n');
}

static int	ft_is_plus_or_minus(char c)
{
	return (c == '+' || c == '-');
}

int			ft_atoi(const char *nptr)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (ft_is_plus_or_minus(*nptr))
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		res = res * 10 + *nptr - '0';
		nptr++;
	}
	return (sign * res);
}
