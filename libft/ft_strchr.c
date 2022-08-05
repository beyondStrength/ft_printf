/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:29:33 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/23 00:38:43 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while ((unsigned char) *s != (unsigned char) c)
	{
		if (!(*s))
			return (0);
		s++;
	}
	return ((char *) s);
}
