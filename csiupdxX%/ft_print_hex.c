/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:57:54 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/05 08:28:40 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n)
{
	unsigned int	num;
	char			*str;
	unsigned int	count;

	count = 0;
	str = ft_utoa_hex(num, 'a');
	while (*str)
	{
		count += ft_putchar_fd (*str);
		str++;
	}
	free(str);
	return (count);
}
