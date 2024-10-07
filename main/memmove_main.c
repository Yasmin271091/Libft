/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:20:11 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 19:20:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
//ft_memmove
int main(void)
{
	char dest[20] = "hola"; 
	const char src[]  = "mundo!";
	size_t n = 6; 

	printf("Antes de ft_memmove: dest = '%s', src = '%s'\n", dest, src);

	ft_memmove(dest, src, n); 

	printf("Después de ft_memmove: dest = '%s'\n", dest);

	return 0;
}