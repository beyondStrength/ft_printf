/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:37:28 by iuturano          #+#    #+#             */
/*   Updated: 2022/08/03 19:18:58 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_hex(unsigned int nbr)
{
	int	size;

	size = 0;
	if (nbr == 0)
		return (size);
	while (nbr)
	{
		nbr /= 16;
		size++;
	}
	return (size);
}

char	*ft_hex_to_str(unsigned int nbr)
{
	int			size;
	char		*str;
	const char	*base;

	size = count_hex(nbr);
	str = ft_calloc(size, 1);
	base = "0123456789abcdef";
	if (!str)
		return (0);
	str += (size - 1);
	while (--size > 0)
	{
		*--str = base[nbr % 16];
		nbr /= 16;
	}
	return (str);
}

void	ft_str_toupper(char *str)
{
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}
