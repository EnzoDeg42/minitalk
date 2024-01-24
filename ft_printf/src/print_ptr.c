/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:06:20 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/27 13:10:37 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_adr(unsigned long int n, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		print_adr(n / 16, len);
		print_adr(n % 16, len);
	}
	else
	{
		(*len) += print_char(base[n]);
	}
}

int	print_ptr(void *ptr)
{
	int	len;

	if (ptr == 0)
		return (print_string("(nil)"));
	len = print_char('0') + print_char('x');
	print_adr((unsigned long int)ptr, &len);
	return (len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		*ptr;
// 	int		a;
// 	int		len;

// 	a = 42;
// 	ptr = &a;
// 	len = print_ptr(ptr);
// 	printf("\nlen = %d\n", len);
// 	return (0);
// }
