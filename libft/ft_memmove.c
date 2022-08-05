/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:31:12 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/23 00:26:46 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p_dst;
	const char	*p_src;

	p_dst = dst;
	p_src = src;
	if (!dst && !src)
		return (0);
	if (p_dst < p_src)
		ft_memcpy(dst, src, len);
	else
	{
		p_dst += len - 1;
		p_src += len - 1;
		while (len--)
			*p_dst-- = *p_src--;
	}
	return (dst);
}
