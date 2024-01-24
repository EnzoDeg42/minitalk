/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:01:20 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 09:00:26 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
// 	int	array [] = { 54, 85, 20, 63, 21 };
// 	int	*copy;
// 	int	length = sizeof( int ) * 5;
// 	int	i;

// 	copy = (int*)malloc(length);
// 	ft_memcpy(copy, array, length);
// 	i = 0;
// 	while(i < 5)
// 	{
// 		printf( "%d ", copy[ i ] );
// 		i++;
// 	}
// 	printf( "\n" );
// 	free( copy );
// 	return 0;
// }
