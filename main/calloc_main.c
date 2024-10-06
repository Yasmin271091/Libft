/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:27:11 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 19:27:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	size_t	count;
	size_t	size;
	char	*ptr;

	size = 4;
	count = 7;
	ptr = ft_calloc(count, size);
	printf("%s\n", ptr);
	return(0);
}