/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:15:45 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 20:15:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_char_with_index(unsigned int index, char *c)
{
	printf("Character at index %u: %c\n", index, *c);
}

int main(void)
{
	char str[] = "Hola";
	ft_striteri(str, print_char_with_index);
	return 0;
}
