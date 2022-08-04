/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:40:57 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/23 00:33:50 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p_haystack;
	char	*p_needle;
	size_t	i;
	size_t	needle_len;

	p_haystack = (char *) haystack;
	p_needle = (char *) needle;
	needle_len = ft_strlen(p_needle);
	i = 0;
	if (ft_strncmp(p_haystack, p_needle, needle_len) == 0)
		return (p_haystack);
	while (*p_haystack)
	{
		if (*p_haystack == *p_needle && i + needle_len <= len
			&& ft_strncmp(p_haystack, p_needle, needle_len) == 0)
			return (p_haystack);
		p_haystack++;
		i++;
	}
	return (0);
}
