/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:35:21 by migupere          #+#    #+#             */
/*   Updated: 2023/02/15 22:07:40 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		write (1, &str[m], 1);
		m++;
	}
}

/*int	main(void)
{
	ft_putstr ("Hello World");
	return (0);
}*/
