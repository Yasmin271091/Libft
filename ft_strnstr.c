/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasjimen <yasjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:22:16 by yasjimen          #+#    #+#             */
/*   Updated: 2024/09/23 16:52:05 by yasjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
        size_t  nlen = ft_strlen(needle);

        if (nlen == 0)
                return (char *)haystack;
        while (*haystack && n >= nlen)
        {
                if (!ft_strncmp(haystack, needle, nlen))
                        return (char *)haystack;
                haystack++;
                n--;
        }
        return (NULL);
}
