/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:22:21 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/12 18:46:37 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_decimal(t_print *tab)
{
    int num;
    char *str;

    num = va_arg(tab->args, int);
    str = ft_atoi(num);
    if (!str)
        str = "(null)";
    while (*str)
    {
        ft_putchar_fd(str,1);
        str++;
        tab->tl++;
    }
    free(str);
}