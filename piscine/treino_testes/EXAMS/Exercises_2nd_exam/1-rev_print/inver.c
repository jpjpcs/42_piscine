/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inver.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:47:02 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/17 12:32:15 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

char *ft_rev_print (char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        len ++;
    }

    //len = 5 
    //len--;
    while (len >= 0)
    {   
        ft_putchar(str[len-1]);
        len --;
    }
    return(str);
}


int main()
{
    char str[] = "Beatriz";
    ft_rev_print (str);
    return(0);
}
                                                                                                                                                                                                 
