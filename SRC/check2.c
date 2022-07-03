#include "push_swap.h"

void	ft_check(int ac, char **av)
{
	char	*merge_tab;
	char	**final_tab;
	int		i;

	i = 0;
	if (ac > 1)
	{
		merge_tab = merge_argvs(av);
		final_tab = ft_split(merge_tab, ' ');
		while (final_tab[i])
		{
			is_alpha_or_digit(final_tab[i]);
			i++;
		}
		duplicated_value(final_tab);
		check_max_min_int(final_tab);
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