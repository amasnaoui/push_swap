/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:39:26 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/14 17:39:28 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
