/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:04:43 by mkwizera          #+#    #+#             */
/*   Updated: 2024/04/12 21:12:58 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
    int number = -42;
    float pi = 3.14159;
    char *str = utoa(number);
    printf("Default: %s\n", str);
//     printf("Left-justify: %-10d %-10.2f\n", number, pi);
//     printf("Show sign: %+d %.2f\n", number, pi);
//     printf("Space: % d %.2f\n", number, pi);
//     printf("Alternate form: %#x %.2X\n", number, pi);
//     printf("Pad with zero: % 10d %.2f\n", number, pi);
//     printf("Escape special characters: %% .2$f\n", pi);

    return 0;
}

