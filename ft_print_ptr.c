/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:16:24 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/15 15:45:32 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_hex(n / 16);
		count += ft_hex(n % 16);
	}
	else
	{
		if (n <= 9)
			count += ft_putchar_fd(n + '0');
		else
			count += ft_putchar_fd(n - 10 + 'a');
	}
	return (count);
}

int	print_hex(unsigned long n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (write(1, "0", 1));
	}
	else
	{
		write(1, "0x", 2);
		count += ft_hex(n);
	}
	return (count);
}
