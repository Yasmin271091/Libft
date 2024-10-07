/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:10:11 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 21:10:11 by marvin           ###   ########.fr       */
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
//ft_strmapi
char add_ascii_value(unsigned int i, char c)
{
    return (c + i); 
}

int main(void)
{
    char *result = ft_strmapi("abcde", add_ascii_value);
    printf("%s\n", result);
    free(result);
    return 0;
}