#include "push_swap.h"

int main	(int ac, char **av)
{
	(void)ac;
	char	*tab;
	char	**tab2;
	int i = 0;

	tab = merge_argvs(av);
	// duplicated_value(av);
	tab2 = ft_split(tab, ' ');
	while (tab2[i])
	{
		is_alpha_or_digit(tab2[i]);
		i++;
	}
	return (0);
}