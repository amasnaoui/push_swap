/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:35:22 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 09:35:23 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_list **stack_a)
{
    swap(stack_a);
    write (1, "sa\n", 3);
}

void sb(t_list **stack_b)
{
    swap(stack_b);
    write (1, "sb\n", 3);
}

void ss(t_list **stack_a, t_list **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    write (1, "ss\n", 3);
}
