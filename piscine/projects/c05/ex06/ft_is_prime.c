/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:38:32 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/22 15:12:18 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main()
{
	int nb = 45;
	//printf("%d", ft_is_prime(nb));
	while (nb >= 0)
	{
		printf("number %d is: %d\n", nb, ft_is_prime(nb));
		nb--;
	}
	return (0);
} */