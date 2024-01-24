/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:33:17 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/07 11:40:17 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char my_src[] = "salut";
// 	char my_des[] = "voici une longue chaine de caractere";
// 	unsigned int i = ft_strlcpy(my_des, my_src, 5);
// 	printf("%s\nret:%d\n", my_des, i);
// }
