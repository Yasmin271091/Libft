/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:35:50 by marvin            #+#    #+#             */
/*   Updated: 2024/09/19 18:35:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t dlen = ft_strlen(dest);
    size_t slen = ft_strlen(src);
    size_t  i;

    i = 0;
    if (n <= dlen)
        return (n + slen);
    while (src[i] && dlen + i < n - 1)
    {
        dest[dlen + i] = src[i];
        i++;
    }
    dest[dlen + i] = '\0';
    return (dlen + slen);
}