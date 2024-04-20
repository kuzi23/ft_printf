/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:54:25 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/20 20:00:12 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#pragma once
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct s_print
{
	va_list	args; // to print out args
	int	spec; // i have to find out
	int	wdt; // width
	int	prec; //precision "+" or "-"
	int	zero; //zero padding 
	int	dash; // - leftalignment.
	int	hash; //specifies alternate form "octal prefix || hexdecimal" ...
	int	sign; // provision if its a negative  or positive number
	int	sp; // space flag ' '
}	t_print;

/*eval format */
int	evalformat(t_print tab, char str, int i);

/*flags_utils*/
int	ft_isdigit(int dg);
int	ft_istype(int c);
int	ft_isspec(int c);

/*csiupdXx%*/
void	ft_print_char(t_print *tab);
void	ft_print_ptr(t_print *tab);
void	ft_print_unsigned(t_print *tab);
void	ft_print_str(t_print *tab);
void	ft_print_decimal(t_print *tab);
void	ft_print_hex_upper(t_print *tab);
void	ft_print_hex(t_print *tab);
void	ft_print_perc(t_print *tab);
/*flags_handlers*/
void	tab_sign(char *output);
void	tab_sp(char *output);
void	tab_zero_padding(char *output, int width);
void	tab_prec_adj(const char *format, int *index, t_print *tab, va_list args);
void	tab_wdt_adj(const char *format, int *index, t_print *tab, va_list args);
// remaining alignment na specification of altenate form #