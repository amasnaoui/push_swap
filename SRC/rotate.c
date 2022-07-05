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