/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:57:08 by mkwizera          #+#    #+#             */
/*   Updated: 2024/05/11 15:09:42 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*dest;
	size_t	i;

	size = ft_strlen(s1);
	dest = (char *)malloc(size + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0' && i < size)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
