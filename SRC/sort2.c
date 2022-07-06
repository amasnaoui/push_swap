/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:12:42 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 11:41:13 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list *stack)
{
	int	x;

	x = stack->content;
	while (stack->next != NULL)
	{
		if (x > stack->next->content)
			x = stack->next->content;
		stack = stack->next;
	}
	return (x);
}

int	ft_index(t_list *stack, int x)
{
	int	i;

	i = 0;
	while (stack->next != NULL)
	{
		if (x == stack->content)
			break ;
		i++;
		stack = stack->next;
	}
	return (i);
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int	x;
	int	i;

	x = find_min(*stack_a);
	i = ft_index(*stack_a, x);
	if (i > 0 && i <= ft_lstsize(*stack_a) / 2)
		while ((*stack_a)->content != x)
			ra(stack_a);
	if (i > ft_lstsize(*stack_a) / 2)
		while ((*stack_a)->content != x)
			rra(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	x;
	int	i;

	x = find_min(*stack_a);
	i = ft_index(*stack_a, x);
	if (i > 0 && i <= ft_lstsize(*stack_a) / 2)
		while ((*stack_a)->content != x)
			ra(stack_a);
	if (i > ft_lstsize(*stack_a) / 2)
		while ((*stack_a)->content != x)
			rra(stack_a);
	pb(stack_a, stack_b);
	sort_four(stack_a, stack_b);
	pa(stack_a, stack_b);
}

