#include "push_swap.h"

t_list *creat_stack(char **av)
{
    char	*merge_tab;
	char	**final_tab;
	int		i;
    t_list  *head;
    t_list  *element;

    i = 0;
    merge_tab = merge_argvs(av);
	final_tab = ft_split(merge_tab, ' ');
    head = ft_lstnew(ft_atoi(final_tab[i]));
    while (final_tab[++i])
    {
        element = ft_lstnew(ft_atoi(final_tab[i]));
        ft_lstadd_front(&head, element);
    }
    return (head);
}