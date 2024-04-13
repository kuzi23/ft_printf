/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:43:24 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/13 19:43:55 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_upper(t_print *tab)
{
	unsigned int	num;
	char			*str;

	num = va_arg(tab->args, unsigned int);
	str = ft_utoa_hex(num, 'A');
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		tab->tl += 6;
		return ;
	}
	while (*str)
	{
		ft_putchar_fd (*str, 1);
		str++;
		tab->tl++;
	}
	free(str);
}
