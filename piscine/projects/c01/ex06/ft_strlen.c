/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:21:35 by jode-jes          #+#    #+#             */
/*   Updated: 2023/04/18 15:30:45 by jode-jes         ###   ########.fr       */
/*                                                                           */
/* ************************************************************************** */


#include <stdio.h>

size_t ft_strlen(const char *s)
{   
    int i;

    i = 0;
    while (s[i] !='\0') 
    {
        i++;
    }
    return (i);
}

int main ()
{
    char str [] = "Hello";
    int count;
    count = ft_strlen("hello");
    printf("str lenght is %d \n", count); 
    return (0);
}
