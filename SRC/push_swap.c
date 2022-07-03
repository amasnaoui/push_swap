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

int main	(int ac, char **av)
{
	ft_check(ac, av);
	return (0);
}