/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:11:17 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/15 17:45:52 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if ((!dest || !src) && size == 0)
		return (0);
	i = ft_strlen(dest);
	j = 0;
	if (size < i)
		return ((size_t)ft_strlen(src) + size);
	while (size != 0 && src[j] != '\0' && i + j < size -1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	len = i + (size_t)ft_strlen(src);
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	buffer[15] = "rrrrrrrrrrrrrrr";
// 	//char	*my_string = "Bonjou toi";

// 	//ft_strlcat(buffer, my_string, 11);
// 	printf("%d\n", (int)ft_strlcat(buffer, "lorem ipsum dolor sit amet", 5));
// 	printf("%s\n", buffer);
// 	return (0);
// }
