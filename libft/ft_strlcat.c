/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:34:43 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/04 15:34:46 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (!dstsize || i > dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[j] && i < dstsize - 1)
	{
		dst[i++] = src[j++];
	}
	dst[i] = 0;
	return (ft_strlen(src) + (i - j));
}
