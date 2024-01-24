/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:07:44 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 14:43:09 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if ((!big || !little) && len == 0)
		return (NULL);
	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// // #include <string.h>
// // #include <stdlib.h>

// #include <string.h>
// int	main()
// {

// 	// char	*str = "Salut les amis";
// 	// char	*to_find = "les";
// 	char	*result;
// 	//result = strnstr(str, to_find, 5);
// 	//printf("%s\n", result);
// 	// result = ft_strnstr(str, to_find, 10);
// 	// printf("%s\n", result);
// 	result = ft_strnstr("lorem ipsum dolor sit amet", "", 10);
// 	printf("%s\n", result);
// 	return (0);
// }
