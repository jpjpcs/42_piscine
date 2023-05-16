/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:12:16 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/07 18:39:35 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{	
	char	i;

	i = 'a' ;
	while (i <= 'z')
	{
		write (1, &i, 1);
		i++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
