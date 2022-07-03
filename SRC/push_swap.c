#include "push_swap.h"
#include <stdio.h>
int main	(int ac, char **av)
{
	// ft_check(ac, av);
	t_list *head;
	(void)ac;
	head = creat_stack(av);
	int i = 0;

	while (head)
	{
		i = head->content;
		printf("%d\n",i);
		head = head->next;
	}
	return (0);
}