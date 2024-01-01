/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 09:47:49 by zalouach          #+#    #+#             */
/*   Updated: 2024/01/01 11:47:21 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptr(unsigned long int value, int *count)
{
	ft_putstr("0x", count);
	ft_printhex(value, count, 'a');
}
