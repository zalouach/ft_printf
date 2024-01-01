/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 10:06:04 by zalouach          #+#    #+#             */
/*   Updated: 2024/01/01 11:46:59 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	argp;
	int		count;

	count = 0;
	va_start(argp, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break ;
			ft_get_and_print_format(*format, argp, &count);
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	return (count);
}
