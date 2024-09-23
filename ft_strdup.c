/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasjimen <yasjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:40:54 by yasjimen          #+#    #+#             */
/*   Updated: 2024/09/23 17:07:36 by yasjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
        size_t  len = ft_strlen(s1);
        char    *dup = malloc(len + 1);

        if (!dup)
                return (NULL);
        ft_memcpy(dup, s1, len +1);
        return (dup);
}
