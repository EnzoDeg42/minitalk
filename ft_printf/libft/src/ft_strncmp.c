/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:05:19 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 14:41:07 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n <= 0)
		return (0);
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// #include <stdbool.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	//int a = strncmp( "ABC", "ABC", 5 );
// 	int b = ft_strncmp( "ABA", "ABZ", 3 );

// 	//printf( "%d\n", a );
// 	printf( "%d\n", b );

//     return 0;
// }
