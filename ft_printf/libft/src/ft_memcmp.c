/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:58:54 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/11 10:45:47 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	if (s1 == s2 || n == 0)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		i++;
		str1++;
		str2++;
	}
	return (0);
}

// #include <assert.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main()
// {
// 	int n;
// 	char buffer1[] = "DWgaOtP12df0";
// 	char buffer2[] = "DWGAOTP12DF0";

// 	n = ft_memcmp(buffer1, buffer2, sizeof(buffer1));
// 	if (n > 0)
// 		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
// 	else if (n < 0)
// 		printf("'%s' is less than '%s'.\n", buffer1, buffer2);
// 	else
// 		printf("'%s' is the same as '%s'.\n", buffer1, buffer2);

// 	return 0;
// }
