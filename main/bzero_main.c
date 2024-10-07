/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:12:59 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 19:12:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 
#include <stddef.h>

int main(void)
{
    char str[50] = "Hello, World!";
    printf("Resultado: '%s'\n", str + 7); 
    return 0;
}
