/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:18:03 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 21:18:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str1 = "Hola";
    char *str2 = "Hola Mundo";
    size_t n = 4;

    int result = ft_strncmp(str1, str2, n);
    
    if (result == 0)
        printf("Las cadenas son iguales hasta el primer %zu caracteres.\n", n);
    else if (result < 0)
        printf("'%s' es menor que '%s' en los primeros %zu caracteres.\n", str1, str2, n);
    else
        printf("'%s' es mayor que '%s' en los primeros %zu caracteres.\n", str1, str2, n);

    return 0;
}