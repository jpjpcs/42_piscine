/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:22:52 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/23 11:49:21 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnbr(nb)
{
    if (nb > 0 && nb < 10)
    {
        ft_putchar(nb+48);
    }
    else if (nb >= 10)
    {   
        ft_putnbr (nb / 10);
        ft_putchar (nb % 10 + 48);
    }
}
#include <unistd.h>

int main()
{
    int nb = 1;

    while (nb <= 100)
    {
        if (nb % 3 == 0 && nb % 5 ==0)
            write (1, "fizzbuzz", 8);
        else if (nb % 3 == 0)
            write (1, "fizz", 4);
        else if (nb % 5 == 0)
            write (1, "buzz", 4);
        else 
            ft_putnbr (nb);
        nb++;
        ft_putchar ('\n');
    }
    return (0);
}