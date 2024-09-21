/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasjimen <yasjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:49:34 by yasjimen          #+#    #+#             */
/*   Updated: 2024/09/21 15:32:09 by yasjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;

    while ((*str >= 9 && *str <= 13) || *str == ' ')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
            str++;
    }
    return result * sign;
}