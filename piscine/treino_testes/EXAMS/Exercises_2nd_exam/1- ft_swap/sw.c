/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sw.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:35:08 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/17 10:46:32 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;

    printf("a: %d b: %d", *a, *b);

}

int main()
{
    int a = 42;
    int b = 41;
    ft_swap(&a, &b);
    return (0);
}