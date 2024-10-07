/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:21:53 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 21:21:53 by marvin           ###   ########.fr       */
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
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
//ft_strnstr
int main(void)
{
    const char *haystack = "Hola mundo, bienvenido a C";
    const char *needle = "mundo";
    size_t n = 15;  

    char *result = ft_strnstr(haystack, needle, n);

    if (result)
        printf("Se encontró '%s' en '%s' dentro de los primeros %zu caracteres.\n", needle, haystack, n);
    else
        printf("No se encontró '%s' en '%s' dentro de los primeros %zu caracteres.\n", needle, haystack, n);

    return 0;
}