/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:43:07 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/13 15:27:12 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// #include <stdio.h>
// int main(void)
// {
//     t_list  *lst;
//     lst = ft_lstnew("Hello");
//     ft_lstadd_front(&lst, ft_lstnew("World"));
//     ft_lstadd_front(&lst, ft_lstnew("!"));
//     ft_lstdelone(lst, free);
//     char *str = ft_lstlast(lst)->content;
//     printf("%s\n", str);
//     return (0);
// }
