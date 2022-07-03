#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "../libft/libft.h"

int     ft_is_valid(char c1, char c2);
void    is_alpha_or_digit(char const *str);
char	*merge_argvs(char **argv);
void	duplicated_value(char	**str);
void    check_max_min_int(char **final_tab);
void	ft_check(int ac, char **av);
void	ft_over(char **num);
t_list  *creat_stack(char **av);


#endif
