/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:44:22 by migupere          #+#    #+#             */
/*   Updated: 2023/02/18 16:11:01 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while ((str >= 9 && str <= 13) || str == 32)
		++str;
	while (str == 43 || str == 45)
	{
		if (str == 45)
			a++;
		++str;
	}
	while (str >= 48 && str <= 57)
	{
		b *= 10;
		b += str - 48;
		++str;
	}
	if (! (a % 2))
		return (b);
	return (-b);
}

int	main(void)
{
	char m[] = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(m));
}
