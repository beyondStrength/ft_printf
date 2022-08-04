/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:16:16 by iuturano          #+#    #+#             */
/*   Updated: 2022/08/03 19:20:15 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(int nbr, char caps)
{
	char	*str;
	int		len;

	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar_fd('-', 1);
		len++;
	}
	str = ft_hex_to_str(nbr);
	len = ft_strlen(str);
	if (caps == 'X')
		ft_str_toupper(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
