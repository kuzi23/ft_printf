/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unptnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:42:37 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/15 15:46:06 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unputnbr(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n == 4294967295)
	{
		return (write(1, "4294967295", 10));
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10);
		count += ft_putchar_fd(n % 10 + '0');
	}
	else
	{
		count += ft_putchar_fd(n + '0');
	}
	return (count);
}
