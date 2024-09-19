/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:10:39 by marvin            #+#    #+#             */
/*   Updated: 2024/09/19 17:10:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Test de ft_isalpha
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A')); 
    printf("ft_isalpha('1') = %d\n", ft_isalpha('1')); 

    // Test de ft_isdigit
    printf("ft_isdigit('1') = %d\n", ft_isdigit('1')); 
    printf("ft_isdigit('A') = %d\n", ft_isdigit('A')); 

    // Test de ft_strlen
    printf("ft_strlen(\"Hola\") = %zu\n", ft_strlen("Hola")); 

    return 0;
}
