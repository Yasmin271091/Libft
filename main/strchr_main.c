/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:55:52 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 19:55:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	const char str[] = "Hola, mundo!";
	int character = 'm';
	char *result;

	result = ft_strchr(str, character);
	if (result != NULL)
		printf("El carácter '%c' se encuentra en la cadena en la posición: %ld\n", character, result - str);

	return (0);
}
