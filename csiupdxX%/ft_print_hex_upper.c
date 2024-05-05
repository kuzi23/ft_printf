/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:43:24 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/05 08:29:02 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_upper(unsigned int num)
{
	char			*str;
	unsigned int	count;

	count = 0;
	str = ft_utoa_hex(num, 'A');
	if (!str)
	{
		count += ft_putstr_fd("(null)");
		return (0);
	}
	while (*str)
	{
		count += ft_putchar_fd (*str);
		str++;
	}
	free(str);
	return (count);
}
