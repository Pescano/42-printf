/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:49:57 by paescano          #+#    #+#             */
/*   Updated: 2022/10/15 18:20:21 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_print_base(unsigned long long nbr, char *base, int *length, int i)
{
	unsigned long long	nbase;

	nbase = i;
	if (nbr >= nbase)
	{
		ft_print_base(nbr / nbase, base, length, nbase);
		ft_print_base(nbr % nbase, base, length, nbase);
	}
	else
		ft_printchar(base[nbr], length);
	return (length);
}
