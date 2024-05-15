/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:04:00 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/15 15:30:16 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_hexputnbr(unsigned int n, const char c)
{
	int	count;

	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	else if (n >= 16)
	{
		ft_hexputnbr(n / 16, c);
		ft_hexputnbr(n % 16, c);
	}
	else
	{
		if (n >= 10)
		{
			if (c == 'x')
				count += ft_putchar_fd(n - 10 + 'a');
			else if (c == 'X')
				count += ft_putchar_fd(n - 10 + 'A');
		}
		else
		{
			count += ft_putchar_fd(n + '0');
		}
	}
	return (count);
}
