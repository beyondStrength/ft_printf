/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_controller.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:40:14 by iuturano          #+#    #+#             */
/*   Updated: 2022/08/03 19:25:47 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		return (/*unsigned int routine*/0);
	if (*str == 'x' || *str == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), *str));
	if (*str == '%')
		return (/*char routine*/0);
	return (0);
}
