/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:32:40 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/22 15:00:18 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 0;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
	{
		res = nb * (ft_recursive_factorial(nb - 1));
	}
	return (res);
}

/* int main()
{
	int nb = 5;
	// printf ("%d", ft_recursive_factorial(nb));
	while (nb > 0)
	{
		printf("fatorial de %d: %d \n", nb, ft_recursive_factorial(nb));
		nb--;
	}
	return (0);
} */