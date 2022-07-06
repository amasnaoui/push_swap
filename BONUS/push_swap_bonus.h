/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:08:38 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 22:26:59 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "get_next_line.h"

// Parsing
int		ft_is_valid(char c1, char c2);
void	is_alpha_or_digit(char const *str);
char	*merge_argvs(char **argv);
void	duplicated_value(char	**str);
void	check_max_min_int(char **final_tab);
void	ft_check(int ac, char **av);
void	ft_over(char **num);

//Create stack
t_list	*creat_stack(char **av);
int		check_if_sorted(t_list *stack);
void	free_tab(char	**tab);

//Operations
void	swap(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rotate(t_list **stack);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rev_rotate(t_list **stack);
void	rrr(t_list **stack_a, t_list **stack_b);
void	instructions_list(t_list **stack_a, t_list **stack_b, char *line);
void	error(t_list **stack_a, t_list **stack_b);
void	final_check(t_list **stack_a, t_list **stack_b);

#endif
