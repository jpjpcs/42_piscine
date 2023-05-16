/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:05:47 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/23 19:29:17 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
    
    int i = 0;
    int sign = 1;
    int res = 0;

    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }    
    while (str[i] == '+' || str[i] == '-' )
    {
        if (str[i] == '-')
            sign = sign * (-1);
        i++;
    }
    while ((str[i] >= 48 && str[i] <= 57))
    {   
        res = (res * 10) + (str[i] - 48);
        i++;
    } 
    printf("%d", (res*sign));
    return (res * sign);

}

int main()
{
    char str[] = " ---+---+1234ab567";
    ft_atoi(str);
    return (0);
}