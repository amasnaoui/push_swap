/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 01:00:55 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/18 01:00:57 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	tmp = NULL;
	if (!lst || !f)
		return (0);
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == NULL)
			ft_lstclear(&lst, del);
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
