/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:09:05 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 19:09:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char source[] = "libreria"; 
	char dest[10] = "12342";  
	size_t n = 2;            

	ft_memcpy(dest, source, n); 
	printf("%s\n", dest);        

	return (0);
}