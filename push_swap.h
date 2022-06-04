#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

#include <stdio.h>

char	**merge_args(char **argv);
int		check_is_number(char **ag);
int		check_max_min_int(char **ag);
int		ft_cmp(char *s1, char *s2);
int		ft_strstr_lite(char **haystack);

#endif
