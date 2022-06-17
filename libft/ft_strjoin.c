/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:55:41 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/06 12:55:43 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	char	*p;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (s1[++i])
	{
		*p = s1[i];
		p++;
	}
	i = -1;
	while (s2[++i])
	{
		*p = s2[i];
		p++;
	}
	*p = 0;
	return (p - len);
}
