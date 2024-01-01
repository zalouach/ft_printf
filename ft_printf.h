/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 09:51:23 by zalouach          #+#    #+#             */
/*   Updated: 2024/01/01 11:02:05 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_get_and_print_format(char Spesefaire, va_list argp, int *count);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putstr(char *str, int *count);
void	ft_printhex(unsigned long number, int *count, char f);
void	ft_printptr(unsigned long value, int *count);
void	ft_printunsigned(unsigned int n, int *count);

#endif
