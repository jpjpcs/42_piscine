/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nados-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:19:36 by nados-sa          #+#    #+#             */
/*   Updated: 2023/02/20 12:40:46 by nados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tempo;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tempo = tab[i];
				tab[i] = tab[j];
				tab[j] = tempo;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	tab[5] = {5, 4, 3, 2, 1};
	int i;
	int size;

	i = 0;
	size = 5;
	ft_sort_int_tab(tab, 5);
	for (i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
}*/
