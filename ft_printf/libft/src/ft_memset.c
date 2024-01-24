/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 07:12:43 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/08 13:53:40 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*value;

	value = str;
	while (n)
	{
		*value = (unsigned char)c;
		value++;
		n--;
	}
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
//{
// 	size_t i;
//     size_t size;
//     char *my_array;

// 	size = 10;
// 	my_array = (char *)malloc(size * sizeof(char));
//     if (my_array == NULL)
// 	{
//         perror("Erreur allocation memoire");
//         return 1;
//     }
//     ft_memset(my_array, 'A', size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%c ", my_array[i]);
// 		i++;
// 	}
//     free(my_array);

//     return 0;
// }
