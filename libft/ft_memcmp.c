/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:20:38 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/23 00:25:27 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	if (!n)
		return (0);
	p_s1 = (unsigned char *) s1;
	p_s2 = (unsigned char *) s2;
	while (--n && *p_s1 == *p_s2)
	{
		p_s1++;
		p_s2++;
	}
	return (*p_s1 - *p_s2);
}
