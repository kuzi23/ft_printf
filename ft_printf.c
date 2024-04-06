/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 05:47:46 by kuzi              #+#    #+#             */
/*   Updated: 2024/04/05 06:25:48 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
int ft_printf(const char *str, ...);

typedef struct s_print
{
    va_list args; // to print out args
    int wdt; // width
    int prc; //precision
    int zero; //zero padding 
    int pnt; // .
    int dash; // -
    int tl; // total_length (return value)
    int sign; //pos or neg number 
    int is_zero; // is number zero
    int perc; // %
    int sp; // space flag ' '
} t_print;