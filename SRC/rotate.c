/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:35:15 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 09:35:16 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_list **stack_a)
{
    rotate(stack_a);
	write(1, "ra\n", 3);
}

void rb(t_list **stack_b)
{
    rotate(stack_b);
	write(1, "rb\n", 3);
}

void rr(t_list **stack_a, t_list **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    write(1, "rr\n", 3);
}
