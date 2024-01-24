/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:16:47 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/13 10:11:52 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *my_list;
// 	char *str;
// 	char *str2;

// 	str = "Hello World!";
// 	str2 = "Hello World2!";
// 	my_list = ft_lstnew(str);
// 	ft_lstadd_front(&my_list, ft_lstnew(str2));
// 	printf("%s\n", (char *)my_list->content);
// 	printf("%s\n", (char *)my_list->next->content);
// 	return (0);
// }
