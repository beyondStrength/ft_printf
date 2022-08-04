/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:54:40 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/23 00:34:43 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*p_substr;
	char	*p_s;
	size_t	s_len;

	if (!(s))
		return (0);
	s_len = ft_strlen(s);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > s_len)
		len = s_len;
	substr = ft_calloc((len + 1), sizeof(char));
	if (!substr)
		return (0);
	p_s = (char *) s + start;
	p_substr = substr;
	while (*p_s && len--)
		*p_substr++ = *p_s++;
	return (substr);
}
