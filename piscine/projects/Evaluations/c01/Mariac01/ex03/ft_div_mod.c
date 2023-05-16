/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:05:25 by mteixeir          #+#    #+#             */
/*   Updated: 2023/02/18 16:44:22 by mteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	std;

	std = a;
	*div = a / b;
	*mod = std % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div[1];
	int	mod[1];

	a = 9;
	b = 3;
	
	ft_div_mod(a, b, &div, &mod);
	printf("%d", div, mod);
	return(0);
}*/
