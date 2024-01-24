/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:40:46 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/21 14:10:24 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		print_hex(unsigned int num, const char format);
int		print_string(char *s);
int		print_char(char c);
int		print_int(int num);
int		print_uint(unsigned int num);
int		print_ptr(void *ptr);

#endif