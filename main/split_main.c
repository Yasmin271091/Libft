/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:49:02 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 19:49:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 

int main(void)
 {
 	char	**result;

 	result = ft_split("hola mundo, cómo estás?", ' ');
 	while (*result != '\0')
 	{
 		printf("%s\n",*result);
 		result++;
 	}
 	return 0;
 }