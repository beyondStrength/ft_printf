/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:00:06 by iuturano          #+#    #+#             */
/*   Updated: 2022/08/03 19:25:05 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "src/libft.h"

int	ft_printf(const char *str, ...);
int	ft_args_controller(const char *str, va_list args);

int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_int(int nbr);
int	ft_print_hex(int nbr, char caps);
int	ft_print_pointer(void * pointer);

char	*ft_hex_to_str(unsigned int nbr);
void	ft_str_toupper(char *str);

#endif
