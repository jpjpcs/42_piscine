/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:34:03 by fgomes-c          #+#    #+#             */
/*   Updated: 2023/02/20 13:36:12 by fgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	x;
	int	soma;

	soma = 0;
	x = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			x = x * (-1);
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		soma = soma * 10 + (*str - 48);
		str++;
	}
	str++;
	return (soma * x);
}

int	main()
{
	char	str[] = " --+-+-1036abc10";
	printf("%d", ft_atoi(str));
}

