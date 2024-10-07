/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:01:32 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 21:01:32 by marvin           ###   ########.fr       */
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
//ft_strlcat
int	main(void)
{
	char dest[20] = "Hola ";
	const char *src = "Mundo!";
	size_t result;

	result = ft_strlcat(dest, src, sizeof(dest));

	printf("Resultado: %s\n", dest);
	printf("Tamaño total: %zu\n", result);

	return (0);
}
