/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:59:01 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/05 12:59:03 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && needle[j] && i < len)
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j] && needle[j] == haystack[i + j] && i + j < len)
				j++;
			if (!needle[j])
				return ((char *)haystack + i);
			j = 0;
		}
		i++;
	}
	return (0);
}
