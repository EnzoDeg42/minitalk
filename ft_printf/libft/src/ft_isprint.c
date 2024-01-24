/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:05:43 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 09:16:44 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isprint('a')); // 1
// 	printf("%d\n", ft_isprint('A')); // 1
// 	printf("%d\n", ft_isprint('z')); // 1
// 	printf("%d\n", ft_isprint('Z')); // 1
// 	printf("%d\n", ft_isprint('1')); // 1
// 	printf("%d\n", ft_isprint(' ')); // 1
// 	printf("%d\n", ft_isprint('\n')); // 0
// 	printf("%d\n", ft_isprint('\t')); // 0
// 	printf("%d\n", ft_isprint('\0')); // 0
// 	printf("%d\n", ft_isprint(127)); // 0
// 	printf("%d\n", ft_isprint(31)); // 0
// }
