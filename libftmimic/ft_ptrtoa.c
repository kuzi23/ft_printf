/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrtoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:25:27 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/11 15:09:28 by mkwizera         ###   ########.fr       */
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

// int main()
// {
//     int num = 2147483647;
//     int *ptr = &num; // Change the number to test different cases
//     char *result = ft_ptrtoa(ptr);
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