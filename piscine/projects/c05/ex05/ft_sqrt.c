/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:59:46 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/22 15:10:24 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
		return (0);
}

/*int main()
{
	int nb = 0;
	printf("%d", ft_sqrt(nb));
	while (nb >= 0)
	{
		printf("square root of %d is: %d \n", nb, ft_sqrt(nb));
		nb--;
	}
	return (0);
}*/