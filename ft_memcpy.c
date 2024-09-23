/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasjimen <yasjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:59:34 by yasjimen          #+#    #+#             */
/*   Updated: 2024/09/23 14:29:50 by yasjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        unsigned char   *d = (unsigned char *)dest;
        const unsigned char     *s = (const unsigned char *)src;

        if (d == s || n == 0)
                return (dest);
        while (n--)
                *d++ = *s++;
        return (dest);
}

