/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:35:59 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/13 18:55:13 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{	
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
			temp = tab [i];
			tab [i] = tab [j];
			tab [j] = temp;
			}
			j++;
		}
		i++;
	}
}

/*int	main()
{	
	int	size;
	int i;

	int l[4] = {3,8,6,1};
	size = 4;
	i = 0;
	
	//printf("%d", size);
	ft_sort_int_tab( l, size);
	while(i < size)
	{
		printf("%d",l[i]);
		i++;
	}
	
	return(0);
}
*/