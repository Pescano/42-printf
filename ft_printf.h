/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:44:11 by paescano          #+#    #+#             */
/*   Updated: 2022/10/16 10:54:20 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

// Main funtion of printf, return the length of the all chain
int	ft_printf(char const *str, ...);
// Print character and update length
int	ft_printchar(char c, int *length);
// Select the format what do you need in the different situation
int	*ft_select(va_list args, const char format, int *length);
// Print strings and update length, print (null) if str is NULL
int	*ft_printstr(char *str, int *length);
// Print numbers in any base
int	*ft_print_base(unsigned long long ptr, char *base, int *length, int nbase);
// Print a void pointer direcction of memory in hex
int	*ft_printptr(unsigned long long ptr, int *length);
// Print a decimal and integer number in base 10
int	*ft_printnbr(int nbr, int *length);
// Print an unsigned number in base 10
int	*ft_printunsigned(unsigned int nbr, int *length);
// Print an unsigned number in base hex
int	*ft_printhex(unsigned int nbr, const char format, int *length);

#endif