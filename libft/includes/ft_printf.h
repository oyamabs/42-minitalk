/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:29:36 by tchampio          #+#    #+#             */
/*   Updated: 2024/11/04 15:30:25 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include "../includes/libft.h"
# include "../includes/ft_printf.h"

int		ft_printf(const char *format, ...);
char	*dec_to_hexa_conversion(int decimal_Number);
int		ft_print_ptr_nb(uintptr_t decimal_Number);
int		ft_print_ptr(void *ptr);
int		ft_print_integer(int i);
int		ft_print_uinteger(unsigned int i);
int		ft_print_hex(unsigned int num, const char format);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned	int num);

#endif
