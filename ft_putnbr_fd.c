/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:41:38 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/08/28 15:20:00 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putnbr_fd(int n, int fd, int printed_bytes)
{
    if (n == -2147483648)
    {
        printed_bytes += ft_putchar_fd('-', fd);
        printed_bytes += ft_putchar_fd('2', fd);
        printed_bytes += ft_putstr_fd("147483648", fd, printed_bytes);
    }
    else if (n < 0)
    {
        printed_bytes += ft_putchar_fd('-', fd);
        n = -n;
        printed_bytes += ft_putnbr_fd(n, fd, printed_bytes);
    }
    else if (n > 9)
    {
        printed_bytes += ft_putnbr_fd(n / 10, fd, printed_bytes);
        printed_bytes += ft_putchar_fd(n % 10 + '0', fd);
    }
    else
    {
        printed_bytes += ft_putchar_fd(n + '0', fd);
    }
    return (printed_bytes);
}
