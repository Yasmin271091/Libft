/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:52:24 by yasjimen          #+#    #+#             */
/*   Updated: 2024/09/23 21:46:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    ft_bzero(void *s, size_t n)
{
        unsigned char   *ptr;
        
        ptr = (unsigned char *)s;

        while (n--)
                *ptr++ = 0;
}


