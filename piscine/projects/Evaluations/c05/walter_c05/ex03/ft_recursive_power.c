/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:00:53 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/17 08:15:50 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power < 1 || (nb == 0 && power == 0))
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(-3, 3));
}*/
