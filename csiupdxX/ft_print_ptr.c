/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:16:24 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/11 15:08:25 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_ptrtoa(void *ptr)
{
	int					digit_count;
	char				*str;
	unsigned long long	adress;

	digit_count = 0;
	if (!ptr)
		return (ft_strdup("0x0"));
	digit_count += 2 * sizeof(void *);
	str = (char *)malloc(sizeof(char) * (digit_count + 3));
	if (!str)
		return (NULL);
	str[digit_count] = '\0';
	str[0] = '0';
	str[1] = 'X';
	adress = (unsigned long long) ptr;
	while (digit_count > 2)
	{
		str[--digit_count] = "0123456789abcdef"[adress % 16];
		adress /= 16;
	}
	return (str);
}

int	ft_print_ptr(void *ptr)
{
	char	*str;
	int		count;

	count = 0;
	str = ft_ptrtoa(ptr);
	if (!str)
		return (0);
	count += ft_putstr_fd(str);
	free(str);
	return (count);
}
