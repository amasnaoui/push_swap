#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"


// char	**merge_args(char **argv);
// int		check_is_number(char **ag);
// int		check_max_min_int(char **ag);
// int		ft_cmp(char *s1, char *s2);
// int		ft_strstr_lite(char **haystack);

int     ft_is_valid(char c1, char c2);
void    is_alpha_or_digit(char const *str);
char	*merge_argvs(char **argv);
void	duplicated_value(char	**str);


#endif
