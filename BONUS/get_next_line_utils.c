/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:50:04 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 20:26:23 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	size_t	i;
	size_t	len;
	char	*p;

	i = -1;
	if (!s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	p = (char *)ft_calloc(len, 1);
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
	free(s1);
	return (p - len);
}

char	*ft_strdup2(char *rest, const char *s1)
{
	size_t	i;
	char	*p;

	i = 0;
	if (!s1)
		return (NULL);
	p = (char *)ft_calloc(ft_strlen(s1), 1);
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	free(rest);
	return (p);
}
