/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:53:58 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/22 14:56:56 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

/* int main()
{
	int nb = 5;
	//printf("%d", ft_iterative_factorial(nb));
	while (nb > 0)
	{
		printf("fatorial de %d: %d \n", nb, ft_iterative_factorial(nb));
		nb--;
	}
	return (0);
} */