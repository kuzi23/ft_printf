/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 05:47:46 by kuzi              #+#    #+#             */
/*   Updated: 2024/05/05 09:46:55 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int evalformat(char c, va_list args) 
{
    int count = 0;
    if (c == 'c')
	{
        char ch;
		
		ch = va_arg(args, int);
        count += write(1, &ch, 1);
    }
	else if (c == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		count += ft_print_decimal(va_arg(args, int));
	else if (c == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'p')
		count += ft_print_ptr(va_arg(args, void *));
	else if (c == 'x')
		count += ft_print_hex(va_arg(args, unsigned int));
	else if (c == 'X')
		count += ft_print_hex_upper(va_arg(args, unsigned int));
	else if (c == '%')
	{
		count += write(1, "%", 1);
	}
    return (count);
}

int ft_printf(const char *format, ...)
{
    int ret = 0;
    va_list args;
    va_start(args, format);
    
    while (*format)
	{
        if (*format == '%') {
            format++;
            ret += evalformat(*format, args);
        } else
		{
            ret += write(1, format, 1);
        }
        format++;
    }
    
    va_end(args);
    return (ret);
}

int main()
{
    ft_printf("hello  rose \n", "marius");
}