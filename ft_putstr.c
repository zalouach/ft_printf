/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 09:43:30 by zalouach          #+#    #+#             */
/*   Updated: 2024/01/01 09:36:34 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	while (!str)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i], count);
		i++;
	}
}
