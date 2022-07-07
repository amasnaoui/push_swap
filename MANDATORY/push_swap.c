/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:35:02 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/07 14:29:44 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_list **stack_a, t_list **stack_b, int ac)
{
	ac--;
	if (ac == 2)
		sort_two(stack_a);
	else if (ac <= 3)
		sort_three(stack_a);
	else if (ac == 4)
		sort_four(stack_a, stack_b);
	else if (ac == 5)
		sort_five(stack_a, stack_b);
	else if (ac >= 6 && ac <= 10)
		from_six_to_ten(stack_a, stack_b);
	else
	{
		index_stack(stack_a);
		handle_cases(stack_a, stack_b, ac);
		repush(stack_a, stack_b);
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		ft_check(ac, av);
		stack_a = creat_stack(av);
		if (!stack_a)
			return (write(1, "allocation failure\n", 19));
		if (check_if_sorted(stack_a))
			return (ft_lstclear(stack_a), 0);
		ft_sort(&stack_a, &stack_b, ac);
		ft_lstclear(stack_a);
	}
	return (0);
}
