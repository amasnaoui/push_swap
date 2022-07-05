#include "push_swap.h"

void swap(t_list **stack)
{
    t_list *tmp;

    if (ft_lstsize(*stack) <= 1)
        return ;
    tmp = (*stack)->next;
    (*stack)->next = (*stack)->next->next;
    tmp->next = (*stack);
    (*stack) = tmp;
}

void rotate(t_list **stack)
{
    t_list	*tmp;

	if (ft_lstsize(*stack) <= 1)
		return ;
	tmp = (*stack);
	(*stack) = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
}

void rev_rotate(t_list **stack)
{
    t_list	*tmp;
	t_list	*last;

	if (ft_lstsize(*stack) <= 1)
		return ;
	tmp = (*stack);
	last = ft_lstlast(*stack);
	while (tmp->next->next)
	tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(stack, last);
}

