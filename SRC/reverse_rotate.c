#include "push_swap.h"

void rra(t_list **stack_a)
{
    rev_rotate(stack_a);
	write(1, "rra\n", 4);
}

void rrb(t_list **stack_b)
{
    rev_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void rrr(t_list **stack_a, t_list **stack_b)
{
    rev_rotate(stack_a);
    rev_rotate(stack_b);
	write(1, "rrr\n", 4);
}