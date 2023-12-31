/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 09:50:18 by zalouach          #+#    #+#             */
/*   Updated: 2023/12/31 09:51:05 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printunsigned(unsigned int n, int *count)
{
	char	c;

	if (n >= 0 && n <= 9)
	{
		c = n + 48;
		ft_putchar(c, count);
	}
	else if (n < 0)
	{
		write (1, "-", 1);
		*count += 1;
		ft_putnbr(-n, count);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
}
