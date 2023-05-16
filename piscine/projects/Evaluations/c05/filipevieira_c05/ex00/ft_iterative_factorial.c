/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:34:08 by fivieira          #+#    #+#             */
/*   Updated: 2023/02/19 15:47:44 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}

int	main(void)
{
 	printf("factorial: %d\n",ft_iterative_factorial(-5));
}
