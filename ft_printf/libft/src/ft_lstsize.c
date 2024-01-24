/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:19:45 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/14 17:24:06 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list  *lst;
// 	lst = ft_lstnew("Hello");
// 	ft_lstadd_front(&lst, ft_lstnew("World"));
// 	ft_lstadd_front(&lst, ft_lstnew("!"));
// 	printf("%d\n", ft_lstsize(lst));
// 	return (0);
// }
