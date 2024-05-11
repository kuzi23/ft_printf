/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:23:38 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/11 15:09:58 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
	digit_count += ft_countsize(num);
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

// int main()
// {
//     int num = 2147483647; // Change the number to test different cases
//     char *result = ft_utoa(num);
//     if (result != NULL)
//     {
//         printf("Integer: %d\n", num);
//         printf("String: %s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }
//     return 0;
// }