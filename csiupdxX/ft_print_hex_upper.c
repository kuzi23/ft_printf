/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:43:24 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/11 17:40:38 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_countsize2(int n)
{
	int	size;
	int	num;

	size = 0;
	num = n;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 16;
		size++;
	}
	return (size);
}

char	*ft_utoa_hex2(int num, char c)
{
	int		digit_count;
	char	*str;
	int		rem;

	digit_count = 0;
	if (num == 0)
		return (ft_strdup("0"));
	digit_count += ft_countsize2(num);
	str = (char *)malloc(sizeof(char) * (digit_count + 1));
	if (!str)
		return (NULL);
	str[digit_count] = '\0';
	while (num > 0)
	{
		rem = num % 16;
		if (rem < 10)
			str[--digit_count] = rem + '0';
		else
		{
			str[--digit_count] = rem - 10 + c;
		}
		num /= 16;
	}
	return (str);
}

int	ft_print_hex_upper(unsigned int num)
{
	char			*str;
	unsigned int	count;

	count = 0;
	str = ft_utoa_hex2(num, 'A');
	if (!str)
	{
		count += ft_putstr_fd("(null)");
		return (0);
	}
	while (*str)
	{
		count += ft_putchar_fd (*str);
		str++;
	}
	free(str);
	return (count);
}
