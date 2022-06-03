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
		while(tab[i][j])
		{
			if ((tab[i][j] == '-' && !ft_isdigit(tab[i][++j])) || !ft_isdigit(tab[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	if(!check_is_number(av))
		write(2, "Error\n", 6);
	else
		write(2, "True\n", 5);
	return (0);
}