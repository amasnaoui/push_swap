#include "push_swap.h"
#include <stdio.h>

char	**merge_args(char **argv)
{
	char	*str;
	char	**tab;
	int		i;

	i = 1;
	str = ft_strdup(argv[1]);
	while (argv[++i])
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, argv[i]);
	}
	tab = ft_split(str, ' ');
	return (tab);
}

int	check_is_number(char **ag)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	tab = merge_args(ag);
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (((tab[i][j] == '-' || tab[i][j] == '+' ) && \
				!ft_isdigit(tab[i][++j])) || !ft_isdigit(tab[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int check_max_min_int(char **ag)
{
	char	**tab;
	int		i;
	long		num;

	i = 0;
	num = 0;
	tab = merge_args(ag);
	while (tab[i])
	{
		num = ft_atoi(tab[i]);
		if (num > 2147483647 || num < -2147483648)
			return (0);
		i++;
	}
	return (1);
}

int	ft_cmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


int	ft_strstr_lite(char **haystack)
{
	int	i;
	int	j;
	char	*needle;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		needle = ft_strdup(haystack[i]);
		j = i;
		while (haystack[++j])
		{
			if (ft_cmp(needle, haystack[j]) == 0)
				return (0);
		}
		i++;
	}
	return (1);
}



