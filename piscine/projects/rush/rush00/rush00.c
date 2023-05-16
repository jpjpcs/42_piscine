/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:00:27 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/08 15:18:53 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{	
	int	cl;
	int	cc;

	cl = 1;
	cc = 1;
	while (cl <= y)
	{
		while (cc <= x)
		{
			if ((cc == 1 || cc == x) && (cl == 1 || cl == y))
				ft_putchar('o');
			else if ((cc > 1 && cc < x) && (cl == 1 || cl == y))
				ft_putchar('-');
			else if ((cc == 1 || cc == x) && (cl > 1 || cl < y))
				ft_putchar (124);
			else
				ft_putchar (' ');
			cc++;
		}
		ft_putchar('\n');
		cc = 1;
		cl++;
	}
}

void	rush(int x, int y);

int	main(void)
{
	rush (5, 6);
	return (0);
}
