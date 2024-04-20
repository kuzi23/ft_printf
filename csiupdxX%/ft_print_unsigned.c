/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:47:10 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/20 19:08:37 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(t_print *tab)
{
	int		num;
	char	*str;

	num = va_arg(tab->args, unsigned int);
	str = ft_utoa(num);
	if (!str)
		return ;
	ft_putstr_fd(str, 1);
	tab->wdt += ft_strlen(str);
	free(str);
}
