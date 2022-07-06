/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:14:01 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 15:49:11 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_list **stack)
{
	int		i;
	t_list	*top;
	t_list	*tmp;

	top = (*stack);
	while (top)
	{
		i = 0;
		tmp = (*stack);
		while (tmp)
		{
			if (top->content > tmp->content)
				i++;
			tmp = tmp->next;
		}
		top->index = i;
		top = top->next;
	}
}

void	handle_cases(t_list **stack_a, t_list **stack_b, int ac)
{
	int	i;
	int	j;

	i = 1;
	ac--;
	if (ac > 10 && ac <= 250)
		j = 15;
	else if (ac > 250)
		j = 25;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i && ft_lstsize(*stack_b) > 1)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= i + j)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}

int	big_nbr(t_list *stack)
{
	int	x;

	x = stack->content;
	while (stack->next)
	{
		if (x < stack->next->content)
			x = stack->next->content;
		stack = stack->next;
	}
	return (x);
}

int	index_big_nbr(t_list *stack, int x)
{
	int	i;

	i = 0;
	while (stack->next)
	{
		if (x == stack->content)
			break ;
		i++;
		stack = stack->next;
	}
	return (i);
}

void	repush(t_list **stack_a, t_list **stack_b)
{
	int	x;
	int	index;
	int	l;

	l = ft_lstsize(*stack_b);
	while (l--)
	{
		x = big_nbr(*stack_b);
		index = index_big_nbr(*stack_b, x);
		if (index > 0 && index <= ft_lstsize(*stack_b) / 2)
			while (x != (*stack_b)->content)
				rb(stack_b);
		if (index > ft_lstsize(*stack_b) / 2)
			while (x != (*stack_b)->content)
				rrb(stack_b);
		pa(stack_a, stack_b);
	}
}
