/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:08:09 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/22 15:07:36 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power > 1)
	{
		(nb = nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}

/* int main()
{
	int nb = 3;
	int power = 2;

	printf("%d", ft_recursive_power(nb, power));
	return (0);
} */