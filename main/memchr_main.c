/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:40:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 19:40:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	const char str[] = "Hola Mundo!";
	char ch = 'M';
	char *result;

	result = ft_memchr(str, ch, 12); 
	if (result)
	{
		printf("Encontrado: %c\n", *result);
	}
	else
	{
		printf("No encontrado.\n");
	}

	return (0);
}