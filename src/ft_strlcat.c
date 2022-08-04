/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:07:59 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/23 00:32:27 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	i;

	size_dest = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (dstsize == 0)
		return (size_src);
	i = 0;
	while ((size_dest + i < dstsize - 1) && (src[i] != 0))
	{
		dst[size_dest + i] = src[i];
		i++;
	}
	if (size_dest > dstsize)
		return (dstsize + size_src);
	dst[size_dest + i] = '\0';
	return (size_dest + size_src);
}
