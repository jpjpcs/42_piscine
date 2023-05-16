/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:31:44 by dlopes-d          #+#    #+#             */
/*   Updated: 2023/02/18 17:39:03 by dlopes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argc > 1)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_put_char(argv[argc - 1][j]);
			++j;
		}
		ft_put_char('\n');
		--argc;
	}
	return (0);
}
