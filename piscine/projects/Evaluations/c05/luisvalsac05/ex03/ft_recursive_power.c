/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:19:48 by luide-so          #+#    #+#             */
/*   Updated: 2023/02/20 18:20:10 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, --power));
}

int	main(void)
{
	int i;
    int j;
    int k = 8;

	i = -1;
	while (i <= k)
	{
        j = -1;
        while (j <= k)
        {
		    printf("%d elevado a %d ->\t%d\n", i, j, ft_recursive_power(i, j));
            j++;
        }
		i++;
	}
	return (0);
} 
