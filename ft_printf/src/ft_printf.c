/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:31:12 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/27 13:27:22 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_printf_charset(char c)
{
	char	*charsets;
	int		i;

	charsets = "cspdiuxX%";
	i = 0;
	while (charsets[i])
	{
		if (charsets[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	handle_printf_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (print_char(va_arg(args, int)));
	else if (specifier == 's')
		return (print_string(va_arg(args, char *)));
	else if (specifier == 'p')
		return (print_ptr(va_arg(args, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (print_int(va_arg(args, int)));
	else if (specifier == 'u')
		return (print_uint(va_arg(args, unsigned int)));
	else if (specifier == '%')
		return (print_char('%'));
	else if (specifier == 'x')
		return (print_hex(va_arg(args, int), 'x'));
	else if (specifier == 'X')
		return (print_hex(va_arg(args, int), 'X'));
	else
		return (print_char('%') + print_char(specifier));
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		print_len;
	va_list	args;

	va_start(args, str);
	if (!str || *str == '\0')
		return (-1);
	i = 0;
	print_len = 0;
	while (str[i])
	{
		if (str[i] == '%' && is_printf_charset(str[i + 1]))
		{
			print_len += handle_printf_specifier(str[i + 1], args);
			i += 2;
			continue ;
		}
		print_len += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	len;
// 	len = printf(0);
// 	printf("len=%d\n", len);
// 	len = ft_printf(0);
// 	printf("len=%d\n", len);
// }

// int	main(void)
// {
// 	int		i;
// 	char	*str;

// 	i = 255;
// 	str = "Coucou %% %c %d %s %x";
// 	ft_printf(str, 'f', 1234, "Enzo", i);
// 	printf("\n");
// 	printf(str, 'f', 1234, "Enzo", i);
// 	printf("\n");
// 	int variable = 42;
// 	int *pointeur = &variable;
// 	ft_printf("Adresse de la variable : %p\n", (void *)pointeur);
// 	printf("Adresse de la variable : %p\n", (void *)pointeur);
// 	return 0;
// }
