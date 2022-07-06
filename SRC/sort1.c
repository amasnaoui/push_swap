/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:13:27 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 11:09:19 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **stack)
{
	sa(stack);
}

void	sort_three(t_list **stack)
{
	if ((*stack)->content > (*stack)->next->content)
		sa(stack);
	if (!check_if_sorted(*stack))
		rra(stack);
	if ((*stack)->content > (*stack)->next->content)
		sa(stack);
}

