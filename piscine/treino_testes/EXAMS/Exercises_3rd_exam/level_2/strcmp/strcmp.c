/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:31:53 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/23 19:45:56 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char ft_strcmp(char *dest, char *src)
{   
    unsigned int i = 0;
    int diff = 0;
    while (dest[i] == src[i] && dest[i] != '\0' && src[i]!= '\0')
    {
        i++;
    }
    diff = dest[i] -src[i];
    return(diff);
}



int main ()
{
    char src[] = "Hello";
    char dest[] = "Wor";
    char src1[] = "Hello";
    char dest2[] = "Wor";
    printf("minha %d \n", ft_strcmp(dest, src));
    printf("original %d \n", strcmp(dest2, src1));
    return (0);
}