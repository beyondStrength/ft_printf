/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:04:37 by iuturano          #+#    #+#             */
/*   Updated: 2022/08/03 16:27:15 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		output_len;

	va_start(args, str);
	output_len = 0;
	while (*str)
	{
		if (*str == '%' && ft_strchr("cspdiuxX%", *(str + 1)))
			output_len += ft_args_controller(++str, args);
		else
			output_len += ft_print_char(*str);
		str++;
	}
	va_end(args);
	return (output_len);
}
