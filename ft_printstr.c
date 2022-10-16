/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:23:07 by paescano          #+#    #+#             */
/*   Updated: 2022/10/16 10:47:14 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c, int *length)
{
	write(1, &c, 1);
	return (*length += 1);
}

int	*ft_printstr(char *str, int *length)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_printstr("(null)", length));
	while (str[i])
	{
		ft_printchar(str[i], length);
		i++;
	}
	return (length);
}
