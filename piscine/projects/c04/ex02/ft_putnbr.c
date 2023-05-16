/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:19:43 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/20 16:51:53 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchard(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		ft_putchard('-');
		lnb = -lnb;
	}
	if (lnb >= 10)
	{
		ft_putnbr(lnb / 10);
		ft_putchard(lnb % 10 + 48);
	}
	else
		ft_putchard(lnb + 48);
}

/*int main()
{
    ft_putnbr(1500);
    return (0);
}*/
