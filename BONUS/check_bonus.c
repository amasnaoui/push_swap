/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:34:47 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/07 14:10:15 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*merge_argvs(char **argv)
{
	int		i;
	char	*tab;

	i = 1;
	if (argv[i][0] == '\0')
		exit(write(2, "Error\n", 6));
	tab = ft_strdup(argv[i]);
	while (argv[++i])
	{
		if (arg_with_space(argv[i - 1]) == 0 && arg_with_space(argv[i]) == 0)
		{
			if (argv[i][0] == '\0')
				exit(write(2, "Error\n", 6));
			tab = ft_strjoin(tab, " ");
			tab = ft_strjoin(tab, argv[i]);
		}
		else
			exit(write(2, "Error\n", 6));
	}
	return (tab);
}

int	ft_is_valid(char c1, char c2)
{
	if (c1 == '-' && (!ft_isdigit(c2)))
		return (1);
	else if (ft_isdigit(c1) && c2 == '-')
		return (1);
	else if (c1 == '+' && (!ft_isdigit(c2)))
		return (1);
	else if (ft_isdigit(c1) && c2 == '+')
		return (1);
	return (0);
}

void	is_alpha_or_digit(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_valid(str[i], str[i + 1]) == 1)
			exit(write(2, "Error\n", 6));
		if (!ft_isdigit(str[i]))
			exit(write(2, "Error\n", 6));
		i++;
	}
}

void	duplicated_value(char	**str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

int	arg_with_space(char	*tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] != 32)
			return (0);
		i++;
	}
	return (1);
}
