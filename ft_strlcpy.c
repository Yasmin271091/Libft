/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasjimen <yasjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:32:19 by yasjimen          #+#    #+#             */
/*   Updated: 2024/09/21 11:24:54 by yasjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t  i;
    i = 0;
    if(n > 0)
    {
        while (src[i] && i < n -1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while (src[i])
        i++;
    return i;
}