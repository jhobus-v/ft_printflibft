/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:33:28 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/08/28 16:28:12 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_puthex_upper(unsigned int hexa)
{
    int printed_bytes = 0;
    const char hex_digits[] = "0123456789ABCDEF";

    if (hexa >= 16)
    {
        printed_bytes += ft_puthex_upper(hexa / 16);
    }
    printed_bytes += ft_putchar_fd(hex_digits[hexa % 16], 1);

    return (printed_bytes);
}