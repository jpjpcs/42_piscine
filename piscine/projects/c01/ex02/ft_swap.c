/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:35 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/09 17:29:49 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int main(void)
{	
	int a;
	int b;
	int *address_a;
	int *address_b;

	a = 41; 
        b = 42;
	address_a = &a;
	address_b = &b;
	ft_swap(address_a, address_b);
	printf("a passou pa c, c pa b, b pa a. a de 41 pa %d, e b de 42 pa %d", a, b); 
}*/
