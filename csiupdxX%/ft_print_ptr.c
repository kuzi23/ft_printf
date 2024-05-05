/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:16:24 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/05 09:18:07 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	char	*str;
	int		count;

	count = 0;
	str = ft_ptrtoa(ptr);
	if (!str)
		return ;
	count += ft_putstr_fd(str);
	free(str);
	return (count);
}
