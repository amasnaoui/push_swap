/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:35:18 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 18:51:51 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_tab(char	**tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

t_list	*creat_stack(char **av)
{
	char	*merge_tab;
	char	**final_tab;
	int		i;
	t_list	*head;
	t_list	*element;

	i = 0;
	merge_tab = merge_argvs(av);
	final_tab = ft_split(merge_tab, ' ');
	head = ft_lstnew(ft_atoi(final_tab[i]));
	if (!head)
		return (NULL);
	while (final_tab[++i])
	{
		element = ft_lstnew(ft_atoi(final_tab[i]));
		ft_lstadd_back(&head, element);
	}
	free(merge_tab);
	free_tab(final_tab);
	return (head);
}

int	check_if_sorted(t_list *stack)
{
	int	num;

	if (ft_lstsize(stack) == 1)
		return (1);
	num = stack->content;
	stack = stack->next;
	while (stack)
	{
		if (num > stack->content)
			return (0);
		num = stack->content;
		stack = stack->next;
	}
	return (1);
}
