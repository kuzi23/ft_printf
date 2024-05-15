/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:54:32 by kuzi              #+#    #+#             */
/*   Updated: 2024/05/15 15:47:13 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	length(int n, int base)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / base;
		i++;
	}
	return (i);
}

void	ft_putchar_fd1(char z)
{
	write(1, &z, 1);
}

int	ft_putnbr_fd(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar_fd1('-');
		ft_putnbr_fd(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10);
		ft_putchar_fd1(n % 10 + '0');
	}
	else
	{
		ft_putchar_fd1(n + '0');
	}
	return (length(n, 10));
}
