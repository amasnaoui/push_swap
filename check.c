#include "push_swap.h"

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

char	*merge_argvs(char **argv)
{
	int		i;
	char	*tab;

	i = 1;
	tab = ft_strdup(argv[i]);
	while (argv[++i])
	{
			tab = ft_strjoin(tab, " ");
			tab = ft_strjoin(tab, argv[i]);
	}
	return (tab);
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

// int ft_check()

// char	**merge_args(char **argv)
// {
// 	char	*str;
// 	char	**tab;
// 	int		i;

// 	i = 1;
// 	str = ft_strdup(argv[1]);
// 	while (argv[++i])
// 	{
// 		str = ft_strjoin(str, " ");
// 		str = ft_strjoin(str, argv[i]);
// 	}
// 	tab = ft_split(str, ' ');
// 	return (tab);
// }

// int	check_is_number(char **ag)
// {
// 	char	**tab;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	tab = merge_args(ag);
// 	while (tab[i])
// 	{
// 		j = 0;
// 		while (tab[i][j])
// 		{
// 			if (((tab[i][j] == '-' || tab[i][j] == '+' ) && \
// 				!ft_isdigit(tab[i][++j])) || !ft_isdigit(tab[i][j]))
// 				return (0);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }

// int check_max_min_int(char **ag)
// {
// 	char	**tab;
// 	int		i;
// 	long		num;

// 	i = 0;
// 	num = 0;
// 	tab = merge_args(ag);
// 	while (tab[i])
// 	{
// 		num = ft_atoi(tab[i]);
// 		if (num > 2147483647 || num < -2147483648)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// int	ft_cmp(char *s1, char *s2)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s1[i] && s2[i])
// 	{
// 		if (s1[i] != s2[i])
// 			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// 		i++;
// 	}
// 	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// }


// int	ft_strstr_lite(char **haystack)
// {
// 	int	i;
// 	int	j;
// 	char	*needle;

// 	i = 0;
// 	j = 0;
// 	while (haystack[i])
// 	{
// 		needle = ft_strdup(haystack[i]);
// 		j = i;
// 		while (haystack[++j])
// 		{
// 			if (ft_cmp(needle, haystack[j]) == 0)
// 				return (0);
// 		}
// 		i++;
// 	}
// 	return (1);
// }
