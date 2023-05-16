/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:55:08 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/23 17:11:55 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c)
{
    write (1, &c, 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i;
    
        i = 0;
        char j = 'a';
        char k = 'A';

        while (argv[1][i] != '\0') 
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                while (j <= argv[1][i])
                {   
                    printf("letra: %c \n ", argv[1][i]);
                    //printf("j: %c \n ", j);
                    //ft_putchar(argv[1][i]);
                    j++;
                }
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {   
                while (k <= argv[1][i])
                {
                    //ft_putchar(argv[1][i]);
                    k++;
                }
                
            }
            else
                ft_putchar(argv[1][i]);
            i++;
        }
        ft_putchar('\n');
    }
    else
    {
        ft_putchar('\n');
    }
    return (0);
}