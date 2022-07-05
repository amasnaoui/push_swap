#include "push_swap.h"
#include <stdio.h>

int main	(int ac, char **av)
{
	// ft_check(ac, av);
	(void)ac;
	t_list *head;
	t_list *second;
	head = creat_stack(av);
	second = creat_stack(av);

	

	// sa(second);

	// while (second)
	// {
	// 	printf("%d ",second->content);
	// 	head = second->next;
	// }
	ss(&head, &second);
	while (head)
	{
		printf("%d ",head->content);
		head = head->next;
	}
	printf("\n");
	while (second)
	{
		printf("%d ",second->content);
		second = second->next;
	}
	return (0);
}
