/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:54:25 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/05 09:17:45 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/*ft_printf*/
int	ft_printf(const char *format, ...);


/*csiupdXx%*/
int	ft_print_char(char c);
int	ft_print_ptr(void *ptr);
int	ft_print_unsigned(unsigned int n);
int	ft_print_str(char *str);
int	ft_print_decimal(int n);
int	ft_print_hex_upper(unsigned int n);
int	ft_print_hex(unsigned int n);
/*libftmimic*/
int	ft_atoi(const char *str);
int	ft_isdigit(int dg);
char	*ft_itoa(int num);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_ptrtoa(void *ptr);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
char	*ft_utoa_hex(int num, char c);
char	*ft_utoa(int num);
int	ft_putchar_fd(char z);
int	ft_putstr_fd(char *str);

/*flags_handlers*/
// void	tab_sign(char *output);
// void	tab_sp(char *output);
// void	tab_zero_padding(char *output, int width);
// void	tab_prec_adj(const char *format, int *index, t_print *tab);
// void	tab_wdt_adj(const char *format, int *index, t_print *tab);

// remaining alignment na specification of altenate form #