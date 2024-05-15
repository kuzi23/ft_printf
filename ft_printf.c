/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 05:47:46 by kuzi              #+#    #+#             */
/*   Updated: 2024/05/15 14:42:49 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	evalformat(char c, va_list args)
{
	int		count;
	char	ch;

	count = 0;
	if (c == 'c')
	{
		ch = va_arg(args, int);
		count += write(1, &ch, 1);
	}
	else if (c == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (c == 'i')
		ft_putnbr_fd(va_arg(args, int));
	else if (c == 'u')
		ft_unputnbr(va_arg(args, unsigned int));
	else if (c == 'p')
		count +=ft_hex(va_arg(args,unsigned long));
	else if (c == 'x')
		ft_hexputnbr(va_arg(args, unsigned int), c);
	else if (c == 'X')
		ft_hexputnbr(va_arg(args, unsigned int), c);
	else if (c == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;

	ret = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ret += evalformat(*format, args);
		}
		else
		{
			ret += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (ret);
}

// int main()
// {
//     ft_printf("Hello world");
//     return (0);
// }
