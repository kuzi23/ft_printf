/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:10:03 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/13 16:54:59 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_print *tab)
{
	char	*str;

	str = va_arg(tab->args, char *);
	if (!str)
		str = "(null)";
	while (*str)
	{
		write(1, str, 1);
		str++;
		tab->tl++;
	}
	free(str);
}
