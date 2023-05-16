/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:25:35 by fivieira          #+#    #+#             */
/*   Updated: 2023/02/19 18:22:55 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	i = 1;
	res = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb >= 0 && power == 0)
	{
		return (1);
	}
	while (i + 1 <= power)
	{
		nb = nb * res;
		i++;
	}
	return (nb);
}

int	main(void)
{
 	printf("Pontencia: %d\n",ft_iterative_power(2,0));
}
