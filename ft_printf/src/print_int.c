/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:35:32 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/21 14:14:32 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_size(int num)
{
	int	size;

	size = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		size++;
		num = -num;
	}
	while (num != 0)
	{
		size++;
		num = num / 10;
	}
	return (size);
}

int	print_int(int num)
{
	ft_putnbr_fd(num, 1);
	return (ft_get_size(num));
}
