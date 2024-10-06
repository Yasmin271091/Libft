/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:33:24 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 19:33:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char s[] = "Soy estudiante de 42 Madrid";
    unsigned int start = 4; 
    size_t len = 10; 
    char *result;

    result = ft_substr(s, start, len);
    printf("%s\n", result); 
    return (0);
}
