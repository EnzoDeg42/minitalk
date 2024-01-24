/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:27:20 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/27 13:19:12 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *s)
{
	int	len;

	if (s == NULL)
		s = "(null)";
	len = 0;
	while (*s)
	{
		len += print_char(*s);
		s++;
	}
	return (len);
}
