/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:57:54 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/20 19:08:00 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(t_print *tab)
{
	unsigned int	num;
	char			*str;

	num = va_arg(tab->args, unsigned int);
	str = ft_utoa_hex(num, 'a');
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		tab->wdt += 6;
		return ;
	}
	while (*str)
	{
		ft_putchar_fd (*str, 1);
		str++;
		tab->wdt++;
	}
	free(str);
}
