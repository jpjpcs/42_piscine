/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nados-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:13:06 by nados-sa          #+#    #+#             */
/*   Updated: 2023/02/20 12:40:24 by nados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*int	main(void)
{
	int	i;
	int	size;

	int	tab[5] =  {1, 2, 3, 4, 5};        
	i = 0;
	size = 5;
	ft_rev_int_tab(tab, 5);
	for ( i = 0; i < size; i++)
	{
		printf("%d", tab[i]);	
	}
}*/
