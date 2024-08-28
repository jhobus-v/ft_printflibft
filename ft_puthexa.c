/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:33:28 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/08/28 16:28:13 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_puthexa(unsigned int hexa)
{
    int printed_bytes = 0;
    const char hex_digits[] = "0123456789abcdef";
	
    if (hexa >= 16)
    {
        printed_bytes += ft_puthexa(hexa / 16);
    }
    printed_bytes += ft_putchar_fd(hex_digits[hexa % 16], 1);

    return (printed_bytes);
}