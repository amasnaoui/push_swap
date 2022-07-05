#include "push_swap.h"
#include <stdio.h>

int main	(int ac, char **av)
{
	// ft_check(ac, av);
	t_list *head;
	// t_list *second;
	(void)ac;
	head = creat_stack(av);
	// second = head;

	

	// sa(second);

	// while (second)
	// {
	// 	printf("%d ",second->content);
	// 	head = second->next;
	// }
	sb(&head);
	while (head)
	{
		printf("%d ",head->content);
		head = head->next;
	}
	return (0);
}
