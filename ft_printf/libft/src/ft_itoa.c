/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:21:48 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/16 09:22:00 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	num_and_len(int n, size_t *len, long int *num)
{
	*num = n;
	*len = ft_intlen(n);
	if (n < 0)
	{
		*num *= -1;
		*len += 1;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long int	num;

	num_and_len(n, &len, &num);
	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;

// 	str = ft_itoa(42);
// 	printf("%s\n", str);
// 	free(str);
// 	str = ft_itoa(-42);
// 	printf("%s\n", str);
// 	free(str);
// 	str = ft_itoa(0);
// 	printf("%s\n", str);
// 	free(str);
// 	str = ft_itoa(2147483647);
// 	printf("%s\n", str);
// 	free(str);
// 	str = ft_itoa(-2147483648);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
