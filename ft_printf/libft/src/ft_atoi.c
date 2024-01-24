/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:24:34 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 09:16:21 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	c;

	result = 0;
	i = 0;
	c = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		c = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * c);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("   --1")); // 0
// 	printf("%d\n", ft_atoi("   +42paris")); // 42
// 	printf("%d\n", ft_atoi("   a1")); // 0
// 	printf("%d\n", ft_atoi("   1a")); // 1
// }
