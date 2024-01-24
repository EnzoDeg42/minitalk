/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:51:02 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 09:16:39 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	return (0);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('a')); // 0
// 	printf("%d\n", ft_isdigit('A')); // 0
// 	printf("%d\n", ft_isdigit('z')); // 0
// 	printf("%d\n", ft_isdigit('Z')); // 0
// 	printf("%d\n", ft_isdigit('1')); // 1
// 	printf("%d\n", ft_isdigit(' ')); // 0
// 	printf("%d\n", ft_isdigit('\n')); // 0
// 	printf("%d\n", ft_isdigit('\0')); // 0
// }