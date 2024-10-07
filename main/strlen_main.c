/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:06:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 21:06:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	const char str[] = "Hola Mundo";
	size_t len;

	len = ft_strlen(str);
	printf("La longitud de '%s' es: %zu\n", str, len);
	return (0);
}