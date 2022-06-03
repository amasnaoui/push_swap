#include "pushswap.h"

char	*merge_args(char **argv)
{
	char	*str;
	int		i;

	i = 1;
	str = ft_strdup(argv[1]);
	while (argv[++i])
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, argv[i]);
	}
	return (str);
}

int main(int ac, char **av)
{
	printf("str = %s", merge_args(av));
	return (0);
}