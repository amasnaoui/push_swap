/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:49:48 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/06 21:54:25 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 1

# include<stdlib.h>
# include<unistd.h>
# include<fcntl.h>
# include<string.h>
# include "../libft/libft.h"

char	*get_next_line(int fd);
char	*get_line(int fd, int *count, char *rest);
int		find(char *str, int *count);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_strdup2(char *rest, const char *s1);
void	*ft_calloc(size_t count, size_t size);

#endif
