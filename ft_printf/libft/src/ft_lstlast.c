/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:42:06 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/14 17:23:37 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list  *lst;
// 	lst = ft_lstnew("Hello");
// 	ft_lstadd_front(&lst, ft_lstnew("World"));
// 	ft_lstadd_front(&lst, ft_lstnew("!"));
// 	char *str = ft_lstlast(lst)->content;
//     printf("%s\n", str);
// 	return (0);
// }
