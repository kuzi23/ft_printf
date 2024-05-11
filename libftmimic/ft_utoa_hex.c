/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:18:33 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/11 15:09:52 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
// # include <stdio.h>
// # include <unistd.h>
// # include <stddef.h>
// # include <stdlib.h>
// # include <ctype.h>
// # include <string.h>

int	ft_countsize(int n)
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

// haraburaho boro za  negative ariko ziroroshye
// nukongeramo statement gusa

char	*ft_utoa_hex(int num, char c)
{
	int		digit_count;
	char	*str;
	int		rem;

	digit_count = 0;
	if (num == 0)
		return (ft_strdup("0"));
	digit_count += ft_countsize(num);
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

// int main() {
//     int numbers[] = {0, 10, 255, -1, -255};
//     int num_elements = sizeof(numbers) / sizeof(numbers[0]);
//     // Test each number
//     for (int i = 0; i < num_elements; i++) {
//         printf("Number: %d, Hexadecimal Representation: %s\n", numbers[i],
// ft_utoa_hex(numbers[i], 'A'));
//     }
//     return 0;
// }
