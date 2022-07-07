/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:21:55 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/07 11:40:36 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	p;

	i = 0;
	p = (char)c;
	while (s[i])
	{
		if (s[i] == p)
			return ((char *)s + i);
		i++;
	}
	if (p == '\0')
		return ((char *)s + i);
	return (NULL);
}
