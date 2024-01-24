/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:08:48 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/08 12:05:56 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argument)
{
	if (ft_isalpha(argument) || ft_isdigit(argument))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('a')); // 1
// 	printf("%d\n", ft_isalnum('A')); // 1
// 	printf("%d\n", ft_isalnum('z')); // 1
// 	printf("%d\n", ft_isalnum('Z')); // 1
// 	printf("%d\n", ft_isalnum('1')); // 1
// 	printf("%d\n", ft_isalnum(' ')); // 0
// 	printf("%d\n", ft_isalnum('\n')); // 0
// 	printf("%d\n", ft_isalnum('\0')); // 0
// }
