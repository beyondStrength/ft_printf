/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuturano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:00:06 by iuturano          #+#    #+#             */
/*   Updated: 2022/08/04 23:34:53 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_args_controller(const char *str, va_list args);

int		ft_print_char(int c);
int		ft_print_int(int nbr);
int		ft_print_str(char *str);
int		ft_print_uint(unsigned int nbr);
int		ft_print_pointer(void *pointer);
int		ft_print_hex(int nbr, char caps);

void	ft_str_toupper(char *str);
char	*ft_hex_to_str(unsigned long nbr);
char	*ft_pointer_to_str(void *pointer);

#endif
