/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:16:24 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/01 21:10:00 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(t_print *tab)
{
	void	*ptr;
	char	*str;
	int		count;

	ptr = va_arg(tab->args, void *);
	str = ft_ptrtoa(ptr);
	if (!str)
		return ;
	count += ft_putstr_fd(str);
	free(str);
	return(count)
}
