/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:07:24 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 22:26:41 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	instructions_list(t_list **stack_a, t_list **stack_b, char *line)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		sa(stack_a);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		sb(stack_b);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		ss(stack_a, stack_b);
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		pa(stack_a, stack_b);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		pb(stack_a, stack_b);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		ra(stack_a);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rb(stack_b);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		rr(stack_a, stack_b);
	else if (ft_strncmp(line, "rra\n", 3) == 0)
		rra(stack_a);
	else if (ft_strncmp(line, "rrb\n", 3) == 0)
		rrb(stack_b);
	else if (ft_strncmp(line, "rrr\n", 3) == 0)
		rrr(stack_a, stack_b);
	else
		error(&stack_a, &stack_b);
}

void	error(t_list **stack_a, t_list **stack_b)
{
	write(2, "Error\n", 6);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	exit(1);
}

void	final_check(t_list **stack_a, t_list **stack_b)
{
	if (check_if_sorted(*stack_a))
	{
		ft_lstclear(*stack_a);
		ft_lstclear(*stack_b);
		write (1, "OK\n", 3);
		exit(0);
	}
	else
	{
		ft_lstclear(*stack_a);
		ft_lstclear(*stack_b);
		write (1, "KO\n", 3);
		exit(0);
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*line;

	stack_a = NULL;
	stack_b = NULL;
	if (ac >= 2)
	{
		ft_check(ac, av);
		stack_a = creat_stack(av);
		if (!stack_a)
			return (write(1, "allocation failure\n", 19));
		line = get_next_line(0);
		while (line)
		{
			instructions_list(&stack_a, &stack_b, line);
			free(line);
			line = get_next_line(0);
		}
		final_check(&stack_a, &stack_b);
	}
	return (0);
}
