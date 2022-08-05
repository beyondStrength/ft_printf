/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_controller.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuturano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:40:14 by iuturano          #+#    #+#             */
/*   Updated: 2022/08/04 23:35:27 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_args_controller(const char *str, va_list args)
{
	if (*str == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (*str == 's')
		return (ft_print_str(va_arg(args, char *)));
	if (*str == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	if (*str == 'd' || *str == 'i')
		return (ft_print_int(va_arg(args, int)));
	if (*str == 'u')
		return (ft_print_uint(va_arg(args, unsigned int)));
	if (*str == 'x' || *str == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), *str));
	if (*str == '%')
		return (ft_print_char('%'));
	return (0);
}
