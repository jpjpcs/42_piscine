/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:26:16 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/07 18:52:02 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char centena, char dezena, char uni)
{
	write (1, &centena, 1);
	write (1, &dezena, 1);
	write (1, &uni, 1);
	if (centena < '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	c = 48;
	while (c <= '7')
	{	
		d = c + 1;
		while (d <= '8')
		{	
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar (c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
