/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:26:40 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/05 21:26:45 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (len)
	{
		if (src - dst < 0)
		{
			i = len - 1;
			while (i > 0)
			{
				((char *) dst)[i] = ((const char *) src)[i];
				i--;
			}
			((char *) dst)[i] = ((const char *) src)[i];
		}
		else
		{
			return (ft_memcpy(dst, src, len));
		}
	}
	return (dst);
}
