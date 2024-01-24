/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:05:43 by edegraev          #+#    #+#             */
/*   Updated: 2023/12/10 14:01:30 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_fd(unsigned int n, int fd, int *len)
{
	char	digit;

	if (n <= 9)
	{
		digit = n + '0';
		(*len) += print_char(digit);
	}
	else
	{
		ft_putunbr_fd(n / 10, fd, len);
		ft_putunbr_fd(n % 10, fd, len);
	}
}

int	print_uint(unsigned int num)
{
	int	len;

	len = 0;
	ft_putunbr_fd(num, 1, &len);
	return (len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		len;

// 	len = print_uint(4294967295);
// 	printf("\nlen = %d\n", len);
// 	return (0);
// }
