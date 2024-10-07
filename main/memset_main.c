/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:25:40 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 19:25:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char	buffer[20];

	ft_memset(buffer, 'A', 10);
	buffer[10] = '\0'; 
	printf("Contenido del buffer: %s\n", buffer);

	return (0);
}