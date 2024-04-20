/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:16:24 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/20 19:08:09 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(t_print *tab)
{
	void	*ptr;
	char	*str;

	ptr = va_arg(tab->args, void *);
	if (!ptr)
	{
		ft_putstr_fd(ptr, 1);
		tab->wdt += 6;
		return ;
	}
	str = ft_ptrtoa(ptr);
	if (!str)
		return ;
	ft_putstr_fd(str, 1);
	tab->wdt = ft_strlen(str);
	free(str);
}
