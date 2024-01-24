/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:04:38 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 09:16:35 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isascii('a')); // 1
// 	printf("%d\n", ft_isascii('A')); // 1
// 	printf("%d\n", ft_isascii('z')); // 1
// 	printf("%d\n", ft_isascii('Z')); // 1
// 	printf("%d\n", ft_isascii('1')); // 1
// 	printf("%d\n", ft_isascii(' ')); // 1
// 	printf("%d\n", ft_isascii('\n')); // 1
// 	printf("%d\n", ft_isascii('\0')); // 1
// 	printf("%d\n", ft_isascii(128)); // 0
// 	printf("%d\n", ft_isascii(-1)); // 0
// }
