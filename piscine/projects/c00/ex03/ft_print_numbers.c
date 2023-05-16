/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:13:07 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/07 18:43:15 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	i;
	char	c;

	i = '0';
	c = '9';
	while (i <= c)
	{
		write(1, &i, 1);
		i++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
