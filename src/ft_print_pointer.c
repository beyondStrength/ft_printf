/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuturano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:39:43 by iuturano          #+#    #+#             */
/*   Updated: 2022/08/04 23:35:30 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_pointer(void *pointer)
{
	int			len;
	char		*str;
	const char	*base;

	if (pointer == (void *)0)
		return (ft_print_str("0x0"));
	str = ft_pointer_to_str(pointer);
	len = 2 + ft_strlen(str);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
