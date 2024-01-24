/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 07:37:23 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/08 14:57:00 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	size_t i;
// 	size_t size;
// 	char *my_array;

// 	size = 10;
// 	my_array = (char *)malloc(size * sizeof(char));
//     if (my_array == NULL)
// 	{
//         perror("Erreur allocation memoire");
//         return 1;
//     }
//     ft_bzero(my_array, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%c ", my_array[i]);
// 		i++;
// 	}
// 	free(my_array);

//     return 0;
// }
