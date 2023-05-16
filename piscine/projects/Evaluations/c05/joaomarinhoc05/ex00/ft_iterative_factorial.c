/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:15:20 by jmarinho          #+#    #+#             */
/*   Updated: 2023/02/20 12:39:05 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	else
	{
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
	}
	return (nb);
}

int	main(void)
{
	int	nb;

	//(void) ac;
	//nb = *av[1] - 48;
	nb=9;	
	//if (ac == 2)
		printf("%i\n", ft_iterative_factorial(nb));
	//else
		printf("Invalid Input\n");

}
