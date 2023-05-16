/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:00:06 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/23 12:54:51 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1 [i] = '\0';
    return (s1);
}

int main ()
{
    char src[] = "Hello";
    char dest[] = "Wor";
    printf("%s", ft_strcpy(dest, src));
    return (0);
}