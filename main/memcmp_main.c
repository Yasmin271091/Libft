/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:43:52 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 19:43:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	const char str1[] = "Hola";
	const char str2[] = "Hola Mundo!";
	int result;

	result = ft_memcmp(str1, str2, 4); 
	if (result == 0)
	{
		printf("Las cadenas son iguales en los primeros 4 caracteres.\n");
	}
	else
	{
		printf("Las cadenas son diferentes.\n");
	}

	return (0);
}