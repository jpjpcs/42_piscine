/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:56:22 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/17 10:15:00 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);    
}

int main(int argc, char **argv)
{   
    int i = 0;
       
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == 'a')
            {
                ft_putchar('a');
                i++;
            }
            else
            {     
                i++;
            }
        }
        write (1, "\n", 2);
    }
    else
    {        
        write (1, "b", 1);
        write (1, "\n", 2);
    return(0);
    }
}