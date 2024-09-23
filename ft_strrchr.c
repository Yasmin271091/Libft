/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasjimen <yasjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:54:26 by yasjimen          #+#    #+#             */
/*   Updated: 2024/09/21 11:54:26 by yasjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
        const char      *last = NULL;

        while (*s)
        {
                if (*s == (char)c)
                        last = s;
                s++;
        }
        if (c == '\0')
                return (char *)s;
        return (char *)last;
}