/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:03:22 by mteixeir          #+#    #+#             */
/*   Updated: 2023/02/18 20:39:18 by mteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h> 

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	std;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		std = tab[i];
		tab[i] = tab[size];
		tab[size] = std;
		i++;
		size--;
	}
}

/*int	main(void)
{
	int	size = 4;
	int	tab[4] = {23, 45, 67, 89};
	int	i = 0;

	ft_rev_int_tab(tab, size);
	while(i <= size - 1)
	{
		printf("%d", tab[i]);
		i++;
	}
	return(0);
}*/
