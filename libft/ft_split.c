/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:40:37 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 16:38:45 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[0] != c)
	{
		j = 1;
		i++;
	}
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c && s[i] != '\0')
			j++;
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
			j = 1;
		i++;
	}
	return (j);
}

static char	**freeall(char **p, int k)
{
	while (k >= 0)
	{
		free(p[k]);
		k--;
	}
	return (NULL);
}

static char	**suiv(char const *s, char c, char **p, int word)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] && k < word)
	{
		if (s[i] != c)
		{
			while (s[j] != c && s[j])
				j++;
			p[k] = ft_substr(s + i, 0, j - i + 1);
			if (!p[k])
				return (freeall(p, k - 1));
			p[k][j - i] = '\0';
			i = j;
			k++;
		}
		i++;
		j = i;
	}
	p[k] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		word;

	if (!s)
		return (NULL);
	word = countword(s, c);
	p = (char **)malloc((word + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	p = suiv(s, c, p, word);
	return (p);
}
