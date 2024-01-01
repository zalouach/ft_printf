/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_and_print_format.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 09:40:14 by zalouach          #+#    #+#             */
/*   Updated: 2024/01/01 11:21:10 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_and_print_format(char Spesefaire, va_list argp, int *count)
{
	if (Spesefaire == 'd' || Spesefaire == 'i')
		ft_putnbr(va_arg(argp, int), count);
	else if (Spesefaire == 'c')
		ft_putchar(va_arg(argp, int), count);
	else if (Spesefaire == 's')
		ft_putstr(va_arg(argp, char *), count);
	else if (Spesefaire == 'x')
		ft_printhex(va_arg(argp, unsigned int), count, Spesefaire - 23);
	else if (Spesefaire == 'X')
		ft_printhex(va_arg(argp, unsigned int ), count, Spesefaire - 23);
	else if (Spesefaire == 'p')
		ft_printptr(va_arg(argp, unsigned long ), count);
	else if (Spesefaire == 'u')
		ft_printunsigned(va_arg(argp, unsigned int), count);
	else
		ft_putchar(Spesefaire, count);
}
