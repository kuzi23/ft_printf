/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:57:54 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/01 21:12:02 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(t_print *tab)
{
	unsigned int	num;
	char			*str;
	unsigned int	count;

	count = 0;
	num = va_arg(tab->args, unsigned int);
	str = ft_utoa_hex(num, 'a');
	while (*str)
	{
		count += ft_putchar_fd (*str);
		str++;
	}
	free(str);
	return (count);
}
