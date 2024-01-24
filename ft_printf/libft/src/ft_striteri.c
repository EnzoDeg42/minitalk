/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:52:56 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 14:10:03 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void	ft_print(unsigned int i, char *c)
// {
// 	printf("%d %c\n", i, *c);
// }

// int	main(void)
// {
// 	char *str = "test";
// 	//ft_striteri(str, &ft_print);
// 	ft_striteri(str, NULL);
// 	return (0);
// }
