/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:58:59 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/22 15:33:37 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	number;

	number = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
	{
		number = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (number);
}

/* int	main()
{
	int index = 6;
	printf("%d", ft_fibonacci(index));
	return (0);
} */