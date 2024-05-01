/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 05:47:46 by kuzi              #+#    #+#             */
/*   Updated: 2024/05/01 18:06:16 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_inialise_tab(t_print *tab)
{
	tab->spec = 0;
	tab->wdt  = 0;
	tab->prec = -1;
	tab->zero = 0;
	tab->dash = 0;
	tab->hash = 0;
	tab->sign = 0;
	tab->sp = 0;
	return (tab);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
	{
		return (0);
	}
	ft_inialise_tab(tab);
	va_start(tab->args, format);
	i = -1;
	ret = 0;
	while (format[++i] && format[i + 1] != '\0')
	{
		if (format[i] == '%')
			evalformat( *tab, format, i+1);
		else
		{
			ret += write(1, &format[i], 1);
		}
	}
	va_end(tab->args);
	free(tab);
	return(ret);
}
