/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:29:10 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/15 14:44:00 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	main(void)
{
    int n;
    int *p;

    n = 5757;
	ft_printf("Hello %c world\n", 'c');
    ft_printf("Hello %s world\n", "marius");
    ft_printf("Hello %u world\n", 4294967295);
    ft_printf("Hello %p world\n", &n);
    ft_printf("Hello %x world\n", 5467);
    ft_printf("Hello %X world\n", 345678);
    ft_printf("Hello %% world\n");

	return (0);
}
