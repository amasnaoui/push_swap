#include "pushswap.h"

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

int main	(int ac, char **av)
{
	(void)ac;
	if (check_max_min_int(av))
		printf("Yes ;)");
	else
		printf("NO :(");
	return (0);
}