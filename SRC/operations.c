#include "push_swap.h"
#include <stdio.h>

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

void pa(t_list **stack_a, t_list **stack_b)
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
		write(1, "pa\n", 3);
	}
}