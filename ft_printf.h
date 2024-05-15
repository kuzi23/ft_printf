/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:54:25 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/15 15:06:19 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

/*ft_printf*/
int		ft_printf(const char *format, ...);
int		ft_putchar_fd(char z);
int		ft_print_str(char *str);
int		ft_putstr_fd(char *str);
int		ft_putnbr_fd(int n);
int		ft_unputnbr(unsigned int n);
char	*ft_ptrtoa(void *ptr);
void	ft_putchar_fd1(char z);
int		ft_hex(unsigned long n);
int		ft_hexputnbr(unsigned int n, char c);

#endif