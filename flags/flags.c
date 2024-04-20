/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:13:29 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/20 19:54:01 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//this helps in controlling ft_istab function verywell..

void	tab_adjust_sign(char *output)
{
	if (output[0] != '+' && output[0] != '-')
	{
		ft_memmove(output + 1, output, ft_strlen(output) + 1);
		output[0] = '+';
	}
}

void	tab_adjust_space(char *output)
{
	if (output[0] != '+' && output[0] != '-' && output[0] != ' ')
	{
		ft_memmove(output + 1, output, ft_strlen(output) + 1);
		output[0] = ' ';
	}
}

void	tab_zero_padding(char *output, int width)
{
	int	len;
	int	zeros;

	len = ft_strlen(output);
	zeros = width - len;
	if (len < width)
	{
		ft_memmove(output + zeros, output, len + zeros);
		ft_memset(output, '0', zeros);
	}
}

void	tab_wdt_adj(const char *format, int *index, t_print *tab, va_list args)
{
	if (format[*index] == '*')
	{
		tab->wdt = va_arg(args, int);
		if (format[*index] < 0)
		{
			tab->dash = 1;
			tab->wdt = -tab->wdt;
		}
		(*index)++;
	}
	else if (isdigit(format[*index]))
	{
		tab->wdt = 0;
		while (isdigit(format[*index]))
		{
			tab->wdt = tab->wdt * 10 + (format[*index] - '0');
			index++;
		}
	}
}

void	tab_prec_adj(const char *format, int *index, t_print *tab, va_list args)
{
	if (format[*index] == '*')
	{
		tab->prec = va_arg(args, int);
		(*index)++;
	}
	else if (isdigit(format[*index]))
	{
		tab->prec = 0;
		while (isdigit(format[*index]))
		{
			tab->wdt = tab->prec * 10 + (format[*index] - '0');
			index++;
		}
	}
}
