/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:39:28 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/06 17:59:41 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_flag(int c)
{
	return (ft_istype(c) || ft_isdigit(c) || ft_isspec(c));
}

int	ft_isspec(int c)
{
	if (c == '-' || c == '0' || c == '.' || c == '*'
		|| c == '#' || c == ' ' || c == '+')
		return (1);
	return (0);
}

// udcsupxX%
int	ft_istype(int c)
{
	if (c == 'u' || c == 'd' || c == 'c' || c == 's'
		|| c == 'u' || c == 'i' || c == 'x' || c =='X' || c =='p' )
		return (1);
	return (0);
}

int	ft_isdigit(int dg)
{
	if (dg >= 48 && dg <= 57)
	{
		return (1);
	}
	return (0);
}
