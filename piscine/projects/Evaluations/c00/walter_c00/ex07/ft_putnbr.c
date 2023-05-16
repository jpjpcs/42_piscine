/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:34:31 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/21 09:41:12 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb)
{
	char	number;

	number = nb + '0';
	write(1, &number, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
}*/
