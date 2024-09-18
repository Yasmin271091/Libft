/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasjimen <yasjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:37:18 by yasjimen          #+#    #+#             */
/*   Updated: 2024/09/18 18:44:14 by yasjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void    *ft_memset(void *b, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)b;
    while (n--)
    *ptr ++ == (unsigned char)c;
    return b;
}
