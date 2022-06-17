/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:48:06 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/05 13:48:08 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int					sign;
	int					i;
	unsigned long long	num;

	sign = 1;
	num = 0;
	i = ft_isspace(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i++] - '0');
		if (num > 9223372036854775807)
		{
			if (sign > 0)
				return (-1);
			else
				return (0);
		}
	}
	return (sign * num);
}
