/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:05:22 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/07 19:02:39 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	trans(int n)
{
	if (n < 10)
	{
		ft_putchar ('0');
		ft_putchar (n % 10 + 48);
	}
	else
	{
		ft_putchar (n / 10 +48);
		ft_putchar (n % 10 + 48);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			trans(a);
			ft_putchar (' ');
			trans(b);
			if (a < 98)
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			b++;
		}	
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
