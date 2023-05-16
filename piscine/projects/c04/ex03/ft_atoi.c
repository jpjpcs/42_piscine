/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:53:46 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/23 19:26:49 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> 

int	ft_atoi(char *str)
{
	int	i;
	int	parity;
	int	res;

	i = 0;
	parity = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			parity = parity * (-1);
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * parity);
}

int main()
{
	char str[] = " ---+---+1234ab567";
	//char str_teste[] = " ---+--+1234ab567";
	printf("%i", ft_atoi(str));
	//printf("%i", atoi(str_teste));
	return (0);
}
