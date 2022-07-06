/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:35:11 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 21:55:01 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*new;

	if (*stack_b)
	{
		tmp = (*stack_b)->next;
		new = (*stack_b);
		new->next = NULL;
		ft_lstadd_front(stack_a, new);
		(*stack_b) = tmp;
	}
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*new;

	if (*stack_a)
	{
		tmp = (*stack_a)->next;
		new = (*stack_a);
		new->next = NULL;
		ft_lstadd_front(stack_b, new);
		(*stack_a) = tmp;
	}
}
