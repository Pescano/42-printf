/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:47:26 by paescano          #+#    #+#             */
/*   Updated: 2022/10/16 12:08:42 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_printnbr(int nbr, int *length)
{
	if (-2147483648 == nbr)
	{
		write(1, "-2147483648", 11);
		*length += 11;
		return (length);
	}
	if (nbr < 0)
	{
		ft_printchar('-', length);
		nbr = -nbr;
	}
	ft_print_base(nbr, "0123456789", length, 10);
	return (length);
}

int	*ft_printptr(unsigned long long ptr, int *length)
{
	write(1, "0x", 2);
	*length += 2;
	if (ptr == 0)
		ft_printchar('0', length);
	else
		ft_print_base(ptr, "0123456789abcdef", length, 16);
	return (length);
}

int	*ft_printunsigned(unsigned int nbr, int *length)
{
	ft_print_base(nbr, "0123456789", length, 10);
	return (length);
}

int	*ft_printhex(unsigned int nbr, const char format, int *length)
{
	if (format == 'X')
		ft_print_base(nbr, "0123456789ABCDEF", length, 16);
	else
		ft_print_base(nbr, "0123456789abcdef", length, 16);
	return (length);
}
