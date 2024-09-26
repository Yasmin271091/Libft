/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:55:52 by marvin            #+#    #+#             */
/*   Updated: 2024/09/26 20:55:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
        char    c;

        if (n == -2147483648)
        {
            write(fd, "-2147483648", 11);
            return;
        }
        if (n < 0)
        {
            write(fd, "-", 1);
            n = -n;
        }
        if (n > 9)
            ft_putnbr_fd(n / 10, fd);
        c = n % 10 + '0';
        write(fd, &c, 1);
}