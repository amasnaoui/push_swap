/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:44:06 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 09:53:58 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (lst != NULL)
	{
		temp = lst->next;
		free(lst);
		lst = temp;
	}
	free(temp);
}
