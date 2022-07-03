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
			if (ft_atoi(str[i]) == ft_atoi(str[j])) // 12 15 9 12 
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}


void check_max_min_int(char *ag)
{
	char	*merge_tab;
	char	**final_tab;
	int		i;
	long		num;

	i = 0;
	num = 0;
	merge_tab = merge_args(ag);
	final_tab = ft_split(merge_tab, ' ');
	while (final_tab[i])
	{
		num = ft_atoi(final_tab[i]);
		if (num > 2147483647 || num < -2147483648)
			write(2, "Error\n", 6);
			exit(1);
		i++;
	}
}

