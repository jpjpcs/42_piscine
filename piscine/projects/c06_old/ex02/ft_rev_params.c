/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:51:36 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/20 21:59:31 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char const *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argc > i)
	{
		j = 0;
		while (argv[argc - 1][j] != '\0')
		{
			ft_putchar(argv[argc - 1][j]);
			j++;
		}
		argc--;
		ft_putchar('\n');
	}
	return (0);
}
