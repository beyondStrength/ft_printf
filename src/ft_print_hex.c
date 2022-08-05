/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuturano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:16:16 by iuturano          #+#    #+#             */
/*   Updated: 2022/08/04 23:35:29 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_hex(int nbr, char caps)
{
	char		*str;
	int			len;

	if (nbr == 0)
		return (ft_print_char('0'));
	len = 0;
	str = ft_hex_to_str((unsigned long) nbr);
	len += ft_strlen(str);
	if (caps == 'X')
		ft_str_toupper(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
