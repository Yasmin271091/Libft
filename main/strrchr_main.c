/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:03:46 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 20:03:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	const char str[] = "Hola, mundo!";
	int character = 'o';
	char *result;

	result = ft_strrchr(str, character);

	if (result != NULL)
		printf("El último carácter '%c' se encuentra en la cadena en la posición: %ld\n", character, result - str);
	
	return 0;
}