/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:44:27 by paescano          #+#    #+#             */
/*   Updated: 2022/10/16 12:14:58 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_select(va_list args, const char format, int *length)
{
	if (format == 'c')
		ft_printchar(va_arg(args, int), length);
	else if (format == 's')
		ft_printstr(va_arg(args, char *), length);
	else if (format == 'p')
		ft_printptr(va_arg(args, unsigned long long), length);
	else if (format == 'd' || format == 'i')
		ft_printnbr(va_arg(args, int), length);
	else if (format == 'u')
		ft_printunsigned(va_arg(args, unsigned int), length);
	else if (format == 'x' || format == 'X')
		ft_printhex(va_arg(args, unsigned int), format, length);
	else if (format == '%')
		ft_printchar('%', length);
	return (length);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	args;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_select(args, str[i + 1], &length);
			i++;
		}
		else
			ft_printchar(str[i], &length);
		i++;
	}
	va_end(args);
	return (length);
}
