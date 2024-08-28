/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:29:53 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/08/28 13:14:30 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd, int printed_bytes)
{
	int	i;

	i = 0;
	while (s[i])
	{
		printed_bytes += ft_putchar_fd(s[i], fd);
		i++;
	}
	return (printed_bytes);
}
