/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:14:25 by mteixeir          #+#    #+#             */
/*   Updated: 2023/02/18 18:03:39 by mteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	std;

	std = *a;
	*a = *a / *b;
	*b = std % *b;
}

/*int	main(void)
{
	int	a;
	int	b;
		
	a = 9;
	b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
	return(0);

}*/
