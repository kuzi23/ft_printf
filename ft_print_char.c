/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:05:14 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/15 15:03:15 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char z)
{
	write(1, &z, 1);
	return (1);
}

int	ft_print_char(char c)
{
	int	count;

	count = 0;
	count += ft_putchar_fd(c);
	return (count);
}
