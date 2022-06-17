/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:01:31 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/06 12:01:33 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lenstring;
	char	*p;

	i = 0;
	if (!s)
		return (0);
	lenstring = ft_strlen(s);
	if (start >= lenstring)
		return (ft_strdup("\0"));
	if (start + len >= lenstring)
		p = (char *)malloc(lenstring - start + 1);
	else
		p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	while (s[start] && i < len)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
