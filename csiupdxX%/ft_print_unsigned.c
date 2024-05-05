/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:47:10 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/05 09:19:51 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int num)
{
	int		count;
	char	*str;

	count = 0;
	str = ft_utoa(num);
	if (!str)
		return (0);
	count += ft_putstr_fd(str);
	return (count);
}
