/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:03:52 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 21:03:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
//ft_strlcpy
int	main(void)
{
	char src[] = "Hello, World!";
	char dest[10];
	size_t result;
    
	result = ft_strlcpy(dest, src, sizeof(dest));

	printf("Resultado: %s\n", dest);
	printf("Tamaño total de src: %zu\n", result);

	return (0);
}