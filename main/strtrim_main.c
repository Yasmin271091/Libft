/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:40:44 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 19:40:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1 [] = "xxHola mundo!xx";
	char	set [] = "xx";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("%s", result);
	return(0);
}