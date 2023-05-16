/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srebelo-srebelo-@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:12:03 by srebelo-          #+#    #+#             */
/*   Updated: 2023/02/20 17:38:07 by srebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	
	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}

int	main(void)
{
	int a = 9;
	int b = 3;
	int div, mod;
	ft_ultimate_div_mod(&a, &b);
	printf ("a = %d, b = %d", a, b);
	return 0;
}
