/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:43:36 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/07 16:43:37 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*suiv(char *p, int i, int sign, unsigned int r)
{
	int	l;

	l = i + sign;
	if (!p)
		return (NULL);
	while (r)
	{
		p[--l] = r % 10 + '0';
		r = r / 10;
	}
	if (sign == 1)
	{
		p[0] = '-';
		p[i + 1] = '\0';
	}
	else
		p[i] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*p;
	int				sign;
	unsigned int	r;

	i = 0;
	r = n;
	sign = 0;
	if (n == -0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		sign = 1;
		r *= -1;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	p = (char *)malloc(i + sign + 1);
	p = suiv(p, i, sign, r);
	return (p);
}
