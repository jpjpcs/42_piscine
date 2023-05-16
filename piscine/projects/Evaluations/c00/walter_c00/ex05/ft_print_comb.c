/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:15:33 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/04 10:56:01 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_last_number(char fst, char snd, char trd)
{
	if (fst == '7' && snd == '8' && trd == '9')
	{
		write(1, &fst, 1);
		write(1, &snd, 1);
		write(1, &trd, 1);
	}
	else
	{
		write(1, &fst, 1);
		write(1, &snd, 1);
		write(1, &trd, 1);
		write(1, ", ", 2);
	}	
}

void	ft_no_repeat(char fst, char snd, char trd)
{
	if (fst < snd && snd < trd)
	{
		ft_last_number(fst, snd, trd);
	}
}

void	ft_print_comb(void)
{
	char	fst;
	char	snd;
	char	trd;

	fst = '0';
	while (fst <= '7')
	{
		snd = '0';
		while (snd <= '8')
		{
			trd = '0';
			while (trd <= '9')
			{	
				ft_no_repeat(fst, snd, trd);
				trd++;
			}
			snd++;
		}
		fst++;
	}
}
