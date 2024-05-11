/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:57:54 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/11 17:40:08 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_countsize1(int n)
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

char	*ft_utoa_hex1(int num, char c)
{
	int		digit_count;
	char	*str;
	int		rem;

	digit_count = 0;
	if (num == 0)
		return (ft_strdup("0"));
	digit_count += ft_countsize1(num);
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

int	ft_print_hex(unsigned int num)
{
	char			*str;
	unsigned int	count;

	count = 0;
	str = ft_utoa_hex1(num, 'a');
	while (*str)
	{
		count += ft_putchar_fd (*str);
		str++;
	}
	free(str);
	return (count);
}
