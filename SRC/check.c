#include "push_swap.h"

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

void	ft_over(char **num)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	while (num[i])
	{
		while (num[i][j] != '\0')
		{
			if (num[i][j] == '-' || num[i][j] == '+')
				j++;
			while (num[i][j] == '0')
				j++;
			while (num[i][j])
			{
				j++;
				n++;
			}
			if (n > 10)
				exit(write(2, "Error\n", 6));
		}
		i++;
	}
}

void check_max_min_int(char **final_tab)
{
	int		i;
	long	num;

	i = 0;
	num = 0;
	ft_over(final_tab);
	while (final_tab[i])
	{
		num = ft_atoi(final_tab[i]);
		if (num > INT_MAX || num < INT_MIN)
			exit(write(2, "Error\n", 6));
		i++;
	}
}

