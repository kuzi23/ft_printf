/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:22:21 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/11 15:08:02 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_decimal(int num)
{
	char	*str;
	int		count;

	count = 0;
	str = ft_itoa(num);
	if (!str)
	{
		count += ft_putstr_fd("(null)");
		return (0);
	}
	while (*str)
	{
		count += ft_putchar_fd(*str);
		str++;
	}
	free(str);
	return (count);
}
