/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evalformat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:32:44 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/06 20:08:43 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

    // int wdt; // width
    // int prc; //precision
    // int zero; //zero padding 
    // int pnt; // .
    // int dash; // -
    // int tl; // total_length (return value)
    // int sign; //pos or neg number 
    // int is_zero; // is number zero
    // int perc; // %
    // int sp; // space flag ' '

char  *evalformat(t_print tab, const char *str, int i)
{
    while(ft_istype(str[i]) == 0 && ft_isdigit(str[i]) == 0)
    {
        if (str[i] == ".")
            tab.pnt = 1; // we set it to true, 1
            i++;
        if (str[i] == "-")
            tab.dash = 1;
            i++;
    }// here i need to code the eval format well the dynamic functions 'zishakimiyeho zose nzicodding'
}
