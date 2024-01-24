/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:34:23 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 09:16:31 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('a')); // 1
// 	printf("%d\n", ft_isalpha('A')); // 1
// 	printf("%d\n", ft_isalpha('z')); // 1
// 	printf("%d\n", ft_isalpha('Z')); // 1
// 	printf("%d\n", ft_isalpha('1')); // 0
// 	printf("%d\n", ft_isalpha(' ')); // 0
// 	printf("%d\n", ft_isalpha('\n')); // 0
// 	printf("%d\n", ft_isalpha('\0')); // 0
// }