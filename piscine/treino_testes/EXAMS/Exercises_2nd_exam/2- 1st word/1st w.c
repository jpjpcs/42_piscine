/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1st w.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:58:55 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/17 13:36:58 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	last_word(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while (i > 0)
	{	if(str[i] == 32 && str[i] == '\t')
			break;
		i--;
	}
	
	while (str[i] != '\0' && str[i] != 32 && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}