#include "push_swap.h"
#include <stdio.h>

void sa(t_list **stack_a)
{
    t_list *tmp;

    if (ft_lstsize(*stack_a) <= 1)
        return ;
    tmp = (*stack_a)->next;
    (*stack_a)->next = (*stack_a)->next->next;
    // free(stack_a->next);
    tmp->next = (*stack_a); 
    (*stack_a) = tmp;
    write (1, "sa\n", 3);
}

// void sb(t_list **stack_b)
// {
//     t_list *tmp;

//     if (ft_lstsize(*stack_b) <= 1)
//         return ;
//     tmp = (*stack_b)->next;
//     (*stack_b)->next = (*stack_b)->next->next;
//     // free(stack_a->next);
//     tmp->next = (*stack_b); 
//     (*stack_b) = tmp;
//     write (1, "sb\n", 3);
// }