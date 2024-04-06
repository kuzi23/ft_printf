/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:54:25 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/06 18:56:42 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	prc; //precision
	int	zero; //zero padding 
	int	pnt; // .
	int dash; // -
	int tl; // total_length (return value)
	int sign; //pos or neg number 
	int is_zero; // is number zero
	int perc; // %
	int sp; // space flag ' '
} t_print;

/*eval format */
int	evalformat(t_print tab, char str, int i);

/*flags */
int	ft_isdigit(int dg);
int	ft_istype(int c);
int	ft_isspec(int c);