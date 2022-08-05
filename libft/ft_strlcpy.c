/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:19:31 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/23 00:32:41 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	length;

	length = ft_strlen((char *)src);
	if (dstsize)
	{
		while (*src && --dstsize)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (length);
}
