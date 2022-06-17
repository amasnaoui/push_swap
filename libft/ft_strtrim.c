/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:15:22 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/06 13:15:24 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	find(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*p;

	i = 0;
	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1) - 1;
	while (s1[i] && find(s1[i], set))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	while (s1[len] && find(s1[len], set))
		len--;
	p = ft_substr(s1, i, len - i + 1);
	if (!p)
		return (NULL);
	return (p);
}
