/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:35:20 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/14 17:23:05 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

// #include <stdio.h>
// int main(void)
// {
//     t_list  *lst;
//     lst = ft_lstnew("Hello");
//     ft_lstadd_back(&lst, ft_lstnew("World"));
//     ft_lstadd_back(&lst, ft_lstnew("!"));
//     char *str = ft_lstlast(lst)->content;
//     printf("%s\n", str);
//     return (0);
// }
