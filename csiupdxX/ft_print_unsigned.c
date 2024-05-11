/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:47:10 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/11 17:41:01 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_countsize3(int n)
{
	int	size;
	int	num;

	size = 0;
	num = n;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		size++;
	}
	return (size);
}

char	*ft_utoa(int num)
{
	char	*str;
	int		digit_count;

	digit_count = 0;
	if (num == 0)
	{
		return (ft_strdup("0"));
	}
	digit_count += ft_countsize3(num);
	str = (char *)malloc(sizeof(char) * (digit_count + 1));
	if (!str)
		return (NULL);
	str[digit_count] = '\0';
	while (num > 0)
	{
		str[digit_count-- - 1] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int num)
{
	int		count;
	char	*str;

	count = 0;
	str = ft_utoa(num);
	if (!str)
		return (0);
	count += ft_putstr_fd(str);
	return (count);
}
