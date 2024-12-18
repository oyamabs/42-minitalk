/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnumbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 05:50:37 by tchampio          #+#    #+#             */
/*   Updated: 2024/11/04 16:00:42 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_integer(int i)
{
	int		size;
	char	*str;

	str = ft_itoa(i);
	if (str == NULL)
		return (0);
	size = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (size);
}

static int	get_number_size(unsigned int i)
{
	int	size;

	if (i == 0)
		return (1);
	size = 0;
	while (i != 0)
	{
		i /= 10;
		size++;
	}
	return (size);
}

int	ft_print_uinteger(unsigned int i)
{
	unsigned int	nb;

	nb = i;
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, 1);
		ft_putnbr_fd(nb % 10, 1);
	}
	else
		ft_putchar_fd('0' + nb, 1);
	return (get_number_size(i));
}
