/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 05:52:06 by tchampio          #+#    #+#             */
/*   Updated: 2024/11/04 15:25:12 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_ptr_nb(uintptr_t decimal_number)
{
	long		i;
	long		j;
	uintptr_t	temp;
	char		hexa_number[100];

	i = 1;
	while (decimal_number != 0)
	{
		temp = decimal_number % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexa_number[i++] = temp;
		decimal_number = decimal_number / 16;
	}
	j = i - 1;
	while (j > 0)
	{
		ft_putchar_fd(ft_tolower(hexa_number[j--]), 1);
	}
	return (i - 1);
}

int	ft_print_ptr(void *ptr)
{
	int			size;
	uintptr_t	addr;

	if (ptr == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	addr = (uintptr_t)ptr;
	ft_putstr_fd("0x", 1);
	size = ft_print_ptr_nb(addr) + 2;
	return (size);
}
