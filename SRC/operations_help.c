#include "push_swap.h"

void swap(t_list **stack)
{
    t_list *tmp;

    if (ft_lstsize(*stack) <= 1)
        return ;
    tmp = (*stack)->next;
    (*stack)->next = (*stack)->next->next;
    // free(stack_a->next);
    tmp->next = (*stack); 
    (*stack) = tmp;
}