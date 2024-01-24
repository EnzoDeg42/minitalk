/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:05:31 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 11:25:28 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	const char *str = "Hello, World!";
// 	int search_char = 'W';
// 	size_t n = 13;

// 	void *result = ft_memchr(str, search_char, n);

// 	if (result != NULL)
// 		printf("Caractère trouvé à la position %ld.\n", 
// (unsigned char *)result - (unsigned char *)str);
// 	else
// 		printf("Caractère non trouvé dans la chaîne.\n");

// 	return 0;
// }
