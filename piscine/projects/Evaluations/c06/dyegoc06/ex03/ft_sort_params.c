/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:20:11 by dlopes-d          #+#    #+#             */
/*   Updated: 2023/02/19 12:17:42 by dlopes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		++str;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *arg1, char *arg2)
{
	int	i;

	i = 0;
	while (arg1[i] || arg2[i])
	{
		if (arg1[i] != arg2[i])
		{
			return (arg1[i] - arg2[i]);
		}
		++i;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[j];
				argv[j] = swap;
			}
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_put_char(argv[i]);
		++i;
	}
	return (0);
}
