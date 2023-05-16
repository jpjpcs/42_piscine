/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlopes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:54:23 by adlopes-          #+#    #+#             */
/*   Updated: 2023/02/18 23:03:22 by adlopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	arg;

	arg = argc;
	while (arg > 1)
	{
		i = 0;
		while (argv[arg -1][i] != '\0')
		{
			write(1, &argv[arg -1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		arg--;
	}
	return (0);
}
