/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:27:23 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/08 13:39:02 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%zu\n", ft_strlen("Hello World!")); // 12
// 	printf("%zu\n", ft_strlen("")); // 0
// 	printf("%zu\n", ft_strlen("Hello World!\n")); // 13
// 	printf("%zu\n", ft_strlen("Hello World!\0")); // 12
// }
