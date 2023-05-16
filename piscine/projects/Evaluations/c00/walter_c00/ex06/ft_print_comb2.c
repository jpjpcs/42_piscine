/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:57:36 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/05 16:12:18 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_last_number(char fst, char snd, char trd, char fth)
{
	if (fst == '9' && snd == '8' && trd == '9' && fth == '9')
	{
		write(1, &fst, 1);
		write(1, &snd, 1);
		write(1, " ", 1);
		write(1, &trd, 1);
		write(1, &fth, 1);
	}
	else
	{
		write(1, &fst, 1);
		write(1, &snd, 1);
		write(1, " ", 1);
		write(1, &trd, 1);
		write(1, &fth, 1);
		write(1, ", ", 2);
	}		
}

void	ft_convert_char(int count_1, int count_2)
{
	char	fst;
	char	snd;
	char	trd;
	char	fth;

	fst = count_1 / 10 + '0';
	snd = count_1 % 10 + '0';
	trd = count_2 / 10 + '0';
	fth = count_2 % 10 + '0';
	ft_last_number(fst, snd, trd, fth);
}

void	ft_print_comb2(void)
{
	int	count_1;
	int	count_2;

	count_1 = 0;
	while (count_1 <= 99)
	{
		count_2 = count_1 + 1;
		while (count_2 <= 99)
		{
			ft_convert_char(count_1, count_2);
			count_2++;
		}
		count_1++;
	}
}
