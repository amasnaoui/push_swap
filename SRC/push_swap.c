/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:35:02 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 15:54:23 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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

int main	(int ac, char **av)
{
	t_list	*stack_a = NULL;
	t_list	*stack_b = NULL;


	if (ac >= 2)
	{
		ft_check(ac, av);
		stack_a = creat_stack(av);
		if (check_if_sorted(stack_a))
			return (0);
		ft_sort(&stack_a, &stack_b, ac);
		while (stack_a)
		{
			printf("%d ",stack_a->content);
			stack_a = stack_a->next;
		}
	}
	return (0);
}


// int main	(int ac, char **av)
// {
// 	// ft_check(ac, av);
// 	(void)ac;
// 	t_list *head;
// 	t_list *second;
// 	head = creat_stack(av);
// 	second = creat_stack(av);


// 	sa(&head);
// 	sb(&second);
// 	printf("stack a => ");
// 	while (head)
// 	{
// 		printf("%d ",head->content);
// 		head = head->next;
// 	}
// 	printf("\n");
// 	printf("stack b => ");
// 	while (second)
// 	{
// 		printf("%d ",second->content);
// 		second = second->next;
// 	}
// 	return (0);
// }
