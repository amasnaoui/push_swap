#include "push_swap.h"
#include <stdio.h>
int main	(int ac, char **av)
{
	// ft_check(ac, av);
	t_list *head;
	t_list *second;
	(void)ac;
	head = creat_stack(av);
	second = head;
	int i = 0;

	while (head)
	{
		i = head->content;
		printf("%d\n",i);
		head = head->next;
	}

	printf("%d", check_if_sorted(second));
	return (0);
}
