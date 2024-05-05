/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:10:03 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/05 09:16:13 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char z)
{
	write(1, &z, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int count;
	
	count = 0;
	if (!str)
		return (0);
	while (*str != '\0')
	{
		count += ft_putchar_fd(*str);
		str++;
	}
	return (count);
}

