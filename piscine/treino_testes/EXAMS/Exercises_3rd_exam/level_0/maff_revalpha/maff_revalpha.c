/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:23:16 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/23 13:27:13 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
    write (1, &c, 1);
}
int main()
{   
    
    char l1 = 'z';
    char l2 = 'Y';

    while (l1 >= 'a')
    {
        ft_putchar (l1);
        ft_putchar (l2);
        l1 = l1 - 2;
        l2 = l2 - 2;
    }
    return (0);
}