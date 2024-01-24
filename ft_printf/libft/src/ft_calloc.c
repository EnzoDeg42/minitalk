/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:56:21 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 11:14:26 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size == 0 || nmemb == 0)
		return (malloc(1));
	if (__SIZE_MAX__ / nmemb < size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	i = 0;
// 	str = ft_calloc(10, sizeof(char));
// 	while (i < 10)
// 	{
// 		printf("%c.", str[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
