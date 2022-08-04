/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:25:49 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/23 00:31:13 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	output;

	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	output = n;
	if (output >= 10)
	{
		ft_putnbr_fd(output / 10, fd);
		ft_putchar_fd(output % 10 + '0', fd);
	}
	else
		ft_putchar_fd(output + '0', fd);
}
