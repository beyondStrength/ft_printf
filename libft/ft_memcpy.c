/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:10:00 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/23 00:26:21 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;

	p_dst = dst;
	p_src = src;
	if (!dst && !src)
		return (0);
	if (!n)
		return (dst);
	if (!p_dst && !p_src && !n)
		return (0);
	while (n--)
		*p_dst++ = *p_src++;
	return (dst);
}
