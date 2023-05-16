/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:58:52 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/07 18:48:00 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	if (n < 0)
	{
		write(1, "N", 1);
	}
}

/*int	main(void)
{
	int	j;

	j = -100;
	ft_is_negative(j);
	return (0);
}*/
