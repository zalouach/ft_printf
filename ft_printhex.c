/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 09:48:51 by zalouach          #+#    #+#             */
/*   Updated: 2024/01/01 11:16:55 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex( unsigned long number, int *count, char f)
{
	if (number < 16)
	{
		if (number < 10)
		{
			ft_putchar(('0' + number), count);
		}
		else if (number < 16)
		{
			ft_putchar((f + number - 10), count);
		}
	}
	else
	{
		ft_printhex(number / 16, count, f);
		if ((number % 16) < 10)
		{
			ft_putchar(('0' + (number % 16)), count);
		}
		else if ((number % 16) >= 10)
		{
			ft_putchar((f + (number % 16) - 10), count);
		}
	}
}
