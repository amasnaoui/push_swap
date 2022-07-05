#include "push_swap.h"
#include <stdio.h>

int main	(int ac, char **av)
{
	t_list	*stack_a = NULL;
	// t_list	*stack_b = NULL;
	if (ac >= 2)
	{
		ft_check(ac, av);
		stack_a = creat_stack(av);
		// while (stack_a)
		// {
		// 	printf("%d ",stack_a->content);
		// 	stack_a = stack_a->next;
		// }
		int i = check_if_sorted(stack_a);
		if (i == 0)
			exit(1);
		printf("OK");
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
