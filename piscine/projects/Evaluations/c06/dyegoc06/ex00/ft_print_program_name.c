/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:10:17 by dlopes-d          #+#    #+#             */
/*   Updated: 2023/02/18 17:15:46 by dlopes-d         ###   ########.fr       */
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

	i = 0;
	if (argc)
	{
		while (argv[0][i])
		{
			ft_put_char(argv[0][i]);
			++i;
		}
	}
	return (0);
}
