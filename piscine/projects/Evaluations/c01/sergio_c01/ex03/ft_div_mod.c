/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srebelo-<srebelo-@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:23:33 by srebelo-          #+#    #+#             */
/*   Updated: 2023/02/20 17:23:43 by srebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int a = 9;
	int b = 3;
	int div, mod;
	ft_div_mod(a, b, &div, &mod);

	printf("&div %d, &mod = %d\n", div, mod);
	
	return (0);
}
