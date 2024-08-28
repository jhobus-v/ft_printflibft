/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:41:38 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/08/28 16:02:08 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putnbr_u_fd(unsigned int n, int fd)
{
    int printed_bytes = 0;

    if (n >= 10)
    {
        printed_bytes += ft_putnbr_u_fd(n / 10, fd);
    }
    printed_bytes += ft_putchar_fd(n % 10 + '0', fd);

    return (printed_bytes);
}
