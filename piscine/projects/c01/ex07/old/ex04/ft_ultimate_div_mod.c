/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:49:38 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/09 19:19:49 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}

/*int main (void)
{
	int a;
	int b;

	a = 123;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("resultado %d e resto %d", a, b); 
	return (0);
}*/
