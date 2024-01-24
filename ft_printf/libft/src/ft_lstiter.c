/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:58:57 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/14 10:08:47 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// void my_function(void *content)
// {
//     printf("%s\n", (char*)content);
// }

// int main()
// {
//     t_list *my_list = ft_lstnew("Hello");
// 	ft_lstadd_back(&my_list, ft_lstnew("World"));
// 	ft_lstadd_back(&my_list, ft_lstnew("Linda"));
//     ft_lstiter(my_list, my_function);
//     return 0;
// }
